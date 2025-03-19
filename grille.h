//struct
struct      s_grille
{
    char    _tab[9];
    char    _rpz;
    int     _tailleTab;
    int     _posi;     
};
//protos
//----------------------------------------
struct s_grille     init_grille(char);
//----------------------------------------
void    maj_cell_sur_grille(struct s_grille*, int posi);
int     ft_tailleStr(char*);