#include <stdio.h>

int main(){
    int matriz[3][4], lin, col, cont=0, vet[4], vet1[4], soma=0, i;
    for (lin=0; lin<3; lin++){
        for (col=0; col<4; col++){
            printf ("DIgite um valor: ");
            scanf ("%d", &matriz[lin][col]);
        }
    }
    printf ("\nValores da matriz: ");
    for (lin=0; lin<3; lin++){
        printf ("\n");
        for (col=0; col<4; col++){
            printf (" %d | ", matriz[lin][col]);
        }
    }
    for (col=0; col<4; col++){
        for (lin=0; lin<3; lin++){
            if (matriz[lin][col]>10)
            cont++;
        }
        soma=soma+matriz[lin][col];
    
    vet[col]=cont;
    vet1[col]=soma;
    soma=0;
    cont=0;
    }
    printf ("\nA quantidade de valores maiores que 10 em cada coluna: ");
    for (i=0; i<4; i++){
    printf (" %d | ", vet[i]);
    }

    printf ("\nA soma de cada coluna: ");
    for (i=0; i<4; i++){
    printf (" %d | ", vet1[i]);
    }
    return 0;
}