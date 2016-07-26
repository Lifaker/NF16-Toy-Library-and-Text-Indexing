#include <stdio.h>
#include <stdlib.h>
#include "Ex1.h"

void somme()
{
    float a, b;
    printf("Entrez 2 nombres : ");
    scanf("%f %f", &a, &b);
    float sum = a + b;
    printf("%f + %f = %f", a, b, sum);
}

void inverser()
{
    float a, b, tmp;
    printf("Entrez 2 nombres : ");
    scanf("%f %f", &a, &b);
    tmp = a;
    a = b;
    b = tmp;
    printf("a = %f  b = %f ", a, b);

}

void pourcentage()
{
    float a, b;
    printf("Entrez le nombre : ");
    scanf("%f", &a);
    printf("Entrez le pourcentage : ");
    scanf("%f", &b);
    float resultat = a * (b/100);
    printf("%f * %f%% = %f", a, b, resultat);
}

void temperature()
{
    float a, resultat;
    printf("Entrez la temperature en Fahrenheit : ");
    scanf("%f", &a);
    resultat = (5.0/9.0)*(a - 32);
    printf("La temperature en Celsius est de : %f", resultat);
}

void conversion()
{
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    printf("decimal : %d\noctal : %o\nhexadecimal : %x\n", n, n, n);
}

void pair()
{
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    if (n==0)
        printf(" 0");

    else if (n % 2 == 0)
        printf("%d est pair", n);

    else
        printf("%d est impair", n);
}

void ascii()
{
    char c;
    c = '5';
    printf("%c\n",c);
    c = 96;
    printf("%c\n",c);
}
