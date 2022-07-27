
#include <stdio.h>
#define mat 4 
int main(){
    int matriz [mat][mat], lin, col;
    float soma=0;

    for (lin=0; lin<mat; lin++){
        for (col=0; col<mat; col++){
        printf ("Digite o valor [%d][%d]: ", lin, col); 
        scanf ("%i", &matriz[lin][col]); 
        }
    }
    for (lin=0; lin<mat; lin++){
        for (col=0; col<mat; col++){
          if (lin==col){
          lin++;
          soma+=matriz[lin][col]; 
          lin--;
          }
        }
    }
    printf ("\nSoma dos elementos abaixo da diagonal principal: %.1f", soma);

        printf ("\nMatriz: ");
    for (lin=0; lin<mat; lin++){
        printf ("\n");
        for (col=0; col<mat; col++){
        printf (" %i |", matriz[lin][col]); 
        }
    }
    printf ("\nDiagonal principal: ");
    for (lin=0; lin<mat; lin++){
        printf ("\n");
        for (col=0; col<mat; col++){
        if (lin==col)
        printf (" %i |", matriz[lin][col]); 
        }
    }

    return 0;
}