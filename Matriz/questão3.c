
#include <stdio.h>

int main(){
    int lin, col, linhas, colunas;

    printf ("Digite o numero de linhas da matriz: ");
    scanf ("%d", &linhas);
    printf ("Digite o numero de linhas da matriz: ");
    scanf ("%d", &colunas);
    
    int matriz[linhas][colunas], matriz_trans[colunas][linhas];
for (lin=0; lin<linhas; lin++){
        for (col=0; col<colunas; col++){
        printf ("Digite o valor [%d][%d]: ", lin, col);
        scanf ("%d", &matriz[lin][col]);
        }
    } 
    for (col=0; col<colunas; col++){
        for (lin=0; lin<linhas; lin++){
        matriz_trans[col][lin]=matriz[lin][col];
        }
    }    
    printf ("\nMatriz: ");
    for (lin=0; lin<linhas; lin++){
        printf ("\n");
        for (col=0; col<colunas; col++){
        printf (" %i |", matriz[lin][col]); 
        }
    }
    printf ("\n\nMatriz Transversa: ");
    for (lin=0; lin<colunas; lin++){
        printf ("\n");
        for (col=0; col<linhas; col++){
        printf (" %i |", matriz_trans[lin][col]); 
        }
    } 
    return 0;
}