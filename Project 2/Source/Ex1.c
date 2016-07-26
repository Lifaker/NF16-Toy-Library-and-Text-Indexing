#include "Ex1.h"

int fact1(int n)
{
    int res = 1;
    for (int i = 2 ; i<=n ; i++)
        res *= i;
    return res;
}

int fact2(int n)
{
    int res;
    if ((n == 0) || (n == 1))
        res = 1;
    else
        res = n * fact2(n-1);
    return res;
}

int saisie_matrice(matrice m)
{
    int taille;
    printf("Taille de la matrice ? ");
    scanf("%d", &taille);
    for (int i = 0; i< taille ; i++)
    {
        for (int j = 0 ; j < taille ; j++)
        {
            printf("M(%d,%d) = ", i+1, j+1);
            scanf("%f", &m[i][j]);
        }
    }
    return taille;
}

void affiche_matrice(matrice m, int taille)
{
    for (int i = 0; i< taille ; i++)
    {
        printf("| ");
        for (int j = 0 ; j < taille ; j++)
            printf("%G ", m[i][j]);
        printf("|\n");
    }
}

float det(matrice m, int taille)
{
    float res=0;
    if (taille > 2)
    {
        matrice m2;
        for (int i = 0; i<taille ; i++)
        {
            sous_matrice(m, m2, taille, i+1);
            if ( i%2==0)
            {
                res+=m[i][0]*det(m2,taille-1);
                printf("taille = %d i=%d res=%f\n",taille , i, res);
            }
            else
            {
                res-=m[i][0]*det(m2,taille-1);
                printf("taille = %d i=%d res=%f\n", taille, i, res);
            }
        }
        return res;
    }
    else
    {
        res = m[0][0]*m[1][1]-m[0][1]*m[1][0];
        return res;
    }
}

void sous_matrice(matrice source, matrice dest, int taille, int ligne)
{
    int k=0, l=0;
    for (int i = 0; i< taille ; i++)
    {
        if (i != ligne-1)
        {
            for (int j = 1 ; j < taille ; j++)
            {
                dest[k][l] = source[i][j];
                l++;
            }
            k++;
        }
        l=0;
    }
}

int fibo1(int n)
{
    if ((n==0) || (n==1))
        return n;
    else
    {
        return fibo1(n-1)+fibo1(n-2);
    }
}



