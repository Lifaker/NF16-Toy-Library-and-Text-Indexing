#include <stdio.h>
#include <stdlib.h>
#include "Ex4.h"

void permut(float *a, float *b)
{
    float tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void pointeurs()
{
    int i=5;
    int *j;
    j=&i;
    printf("i=%d j=%d\n",i,j);
    *j=*j +1;
    printf("i=%d\n",i);
    i*=5;
    printf("*j=%d\n",*j);
    j++;
    printf("*j=%d\n",*j);
}

void lecture()
{
    int *tab[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    for (i=0 ; i<10; i++)
        printf("%d ",tab[i]);
     printf("\n");

    int save=tab[0];
    for (i=1 ; i<10; i++)
        tab[i-1]=tab[i];
    tab[9]=save;
    printf("\n");

    for (i=0 ; i<10; i++)
        printf("%d ",tab[i]);
    printf("\n");

    save = tab[10];
    for (i=10; i>1; i--)
        tab[i]=tab[i-1];
    tab[0]=save;
    printf("\n");

    for (i=0 ; i<10; i++)
        printf("%d ",tab[i]);
    printf("\n");

}
