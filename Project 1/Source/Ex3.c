#include <stdio.h>
#include <stdlib.h>
#include "Ex3.h"

void init_table0()
{
    int table[10];
    for (int i = 0 ; i<10 ; i++)
        table[i]=0;

}

void init_table5()
{
    int table[5];
    for (int i = 0 ; i<5 ; i++)
    {
        table[i] = 4 - i ;
        printf("%d\n", table[i]);
    }
}

void double_table()
{
    int table[3][4];
    for (int i = 0 ; i<3 ; i++)
    {
            for (int j = 0 ; j<4 ; j++)
            {
                table[i][j]=12+j+4*i;
                printf("%d ",table[i][j]);
            }
            printf("\n");
    }
}

void multip_matrice()
{
    const int M=5, L=3, N=4;
    int M1[5][3]= {{1, 2, 3},{1, 2, 3},{1, 2, 3},{1, 2, 3},{1, 2, 3}};;
    int M2[3][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    int M3[5][4];
        for (int i = 0 ; i<M ; i++)
        {
                for (int j = 0 ; j<N ; j++)
                {
                    M3[i][j]=0;
                        for (int k=0; k<L; k++)
                            M3[i][j] += M1[i][k]*M2[k][j];
                    printf("%d ",M3[i][j]);
                }
        }
}
