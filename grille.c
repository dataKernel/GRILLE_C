#include "grille.h"

#include <stdio.h>
#include <stdlib.h>


//========================================================================
//UTILITIES FUNCTIONS
//========================================================================
//------------------------------------------------------------------------
// -- string length --
//------------------------------------------------------------------------
int     ft_tailleStr(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}
//------------------------------------------------------------------------
//  -- init de la grille --
//------------------------------------------------------------------------
struct s_grille     init_grille(char rpz)
{
    struct s_grille     grille;

    grille._posi = -1; /*c histoire de set la posi mais c'est techniquement
    incorrect de set sa posi à 0 si on l'affiche après l'init
    solution1: définir un nbr négatif et faire un check sur nega, si c'est
    le cas on refuse l'affichage.
    solution2: un bool pr check sur un champ indépendant si la posi à été 
    set sinon on ne peut pas afficher la grille*/ 
    grille._tailleTab = 9;
    grille._rpz = rpz;
    for(int i = 0; i < 9; i++)
        grille._tab[i] = rpz;
    return(grille);
}
//------------------------------------------------------------------------
// -- set posi de la cellule dans la grille --
//------------------------------------------------------------------------
void    maj_cell_sur_grille(struct s_grille grille, int posi)
{
    printf("posi:%i", grille._posi);
}


int     main(void)
{
    struct s_grille     grille;

    grille = init_grille('X');

    int     i = 0;
    while(i < 3)
    {
        for(int i = 0; i < 3; i++)
            printf("%c ", grille._tab[i]);
        printf("\n");
        i++;
    }
    maj_cell_sur_grille(grille, 11111);   
    return(0);
}