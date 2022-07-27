
#include <stdio.h>
int main(){
    int lin, col, matriz [4][4], aux_linha2[10], aux_diag_secundaria[10], aux_diag_principal[10];
    for (lin=0; lin<4; lin++){
        for (col=0; col<4; col++){
        printf ("Digite o valor [%d][%d]: ", lin, col); 
        scanf ("%i", &matriz[lin][col]); 
        }
    }
    printf ("\nMatriz antes: ");
    for (lin=0; lin<4; lin++){
    printf ("\n");
    for (col=0; col<4; col++){
    printf (" %i |", matriz[lin][col]); 
    }
    }

    for (col=0; col<4; col++){
      aux_linha2[col]=matriz[2][col];
    }
    for (col=0; col<4; col++){
    matriz[2][col]=matriz[3][col];
    matriz[3][col]=aux_linha2[col];
    }    
    for (col=0; col<4; col++){
    matriz[2][col]=matriz[3][col];
    matriz[3][col]=aux_linha2[col];
    }
    
    for (lin=0, col=3; lin<4; lin++, col--){
      aux_diag_secundaria[col]=matriz[lin][col];
    }
     for (lin=0; lin<4; lin++){
        for (col=0; col<4; col++){
        if (lin==col){
        aux_diag_principal[col]=matriz[lin][col];
        matriz[lin][col]=aux_diag_secundaria[col];
        }
        }
    }
    for (lin=0, col=3; lin<4; lin++, col--){
    matriz[lin][col]=aux_diag_principal[col];
    }

    printf ("\n\nMatriz depois: ");
    for (lin=0; lin<4; lin++){
    printf ("\n");
    for (col=0; col<4; col++){
    printf (" %i |", matriz[lin][col]); 
    }
    }

    return 0;
}