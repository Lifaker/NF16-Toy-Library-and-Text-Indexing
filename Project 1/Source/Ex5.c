#include <stdio.h>
#include <stdlib.h>
#include "Ex5.h"
#include <string.h>

void sous_chaine()
{
    char chaine1[100];
    char chaine2[100];
    printf("Entrez votre chaine de charactere : ");
    scanf("%s",chaine1);
    //printf("%s",chaine);
    printf("Entre votre sous-chaine : ");
    scanf("%s",chaine2);
    printf("\nLa sous chaine fait %d nombre de caractere",strlen(chaine2));
    char *position;
    position = strstr(chaine1,chaine2);
    if (position !=NULL)
        printf("\nLa sous chaine dans la chaine est : %s",(position));
}

void majuscule()
{
    char chaine[100];
    int i=0;
    printf("Entrez votre chaine de charactere : ");
    scanf("%s",&chaine);
    while (chaine[i] != '\0')
    {
        if (chaine[i]>='a' && chaine[i]<='z')
            chaine[i]=chaine[i]-'a'+'A';
        i++;
        }
        printf("%s",chaine);
}
