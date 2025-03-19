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

    grille._posi = -1;
    grille._tailleTab = 9;
    grille._rpz = rpz;
    for(int i = 0; i < 9; i++)
        grille._tab[i] = rpz;
    return(grille);
}
//------------------------------------------------------------------------
// -- set posi de la cellule dans la grille --
//------------------------------------------------------------------------
void    maj_cell_sur_grille(struct s_grille *grille, int posi)
{
    grille->_posi = posi;
    grille->_tab[posi] = '_';
}


int     main(void)
{
    struct s_grille     grille;

    grille = init_grille('X');
    maj_cell_sur_grille(&grille, 4);

    int     i = 0;
    int     counterRow = 0;
    while(i < 9)
    {
        if(counterRow == 3)
        {
            printf("\n");
            counterRow = 0;
        }
        printf("%c", grille._tab[i]);
        counterRow++;
        i++;
    }
    printf("\n");
    return(0);
}