#include <stdio.h>
#include <stdlib.h>
#include "Ex2.h"


void test_ascii()
{
    char c;
    printf("Entrez un caractere (chiffre ou lettre) : ");
    scanf("%c", &c);
    if ((c >= 48) && (c <= 57))
        printf("C'est un chiffre !");

    else if ((c>= 97) && (c<=122))
        printf("C'est une minuscule !");

    else if ((c>=65) && (c<=90))
        printf("C'est une majuscule !");

    else
        printf("Ce n'est ni un chiffre ni une lettre !");
}

void saisie_tab()
{
    int tab[100],i=1;
    while(1)
        {
            printf("Entrez la valeur %d : ", i);
            scanf("%d", &tab[i]);
            if (tab[i] == -1) break;
            i++;
        }
}

void table_multiple()
{

    char c;
    int x = 1;
    while (x != 0)
    {
        printf("Quelle table de multiplication voulez-vous, tapez 0 pour sortir ? ");

        scanf("%c",&c);
        while (getchar() != '\n')
        {}
        x = c - 48;
        if ((x >=1) && (x<=9))
        {
            for (int i=1 ; i<=10 ; i++)
                printf("%d\n", i*x);
        }
        else if (x > 9)
            printf("Ce n'est pas dans les possibilités du programme, recommencez !\n");
    }
}

void nb_lettre()
{
    char c;
    printf("Entrez un chiffre : ");
    c=getchar();
    switch(c)
        {
            case '1' : printf("un\n"); break;
            case '2' : printf("deux\n");break;
            case '3' : printf("trois\n");break;
            default : printf("autre caractere\n");break;
        };
}
