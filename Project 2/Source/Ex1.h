#ifndef EX1_H
#define EX1_H

    #define DIM 10
    #include <stdio.h>
    #include <stdlib.h>

    int fact1(int n);
    int fact2(int n);
    typedef float ligne[DIM];
    typedef ligne matrice[DIM];
    int saisie_matrice(matrice m);
    void affiche_matrice(matrice m, int taille);
    float det(matrice m, int taille);
    void sous_matrice(matrice source, matrice dest, int taille, int ligne);
    int fibo1(int n);

#endif
