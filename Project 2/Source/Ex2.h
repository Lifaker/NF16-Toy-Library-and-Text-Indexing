#ifndef EX2_H
#define EX2_H

    #define NMAX 10

    struct un_tableau_entier {
        int tab[NMAX];
        int ncase;
    };

    typedef char chaine[60];

    struct menu {
        chaine nom; //noms des plats
        int n; //nombre de plats
    };

#endif // EX2_H_INCLUDED
