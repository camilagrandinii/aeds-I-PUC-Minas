#include <stdio.h>
int main(){
    int matriz[4][3], lin, col, maior, menor, lin_maior, col_maior, lin_menor, col_menor;
    float media, soma;

    for (lin=0; lin<4; lin++){
        for (col=0; col<3; col++){
            printf ("Digite um valor: ");
            scanf ("%i", &matriz[lin][col]);
        }
    }// fim do for de fora

    for (lin=0; lin<4; lin++){
        for (col=0; col<3; col++){
            soma+=matriz[lin][col];
        }
    }
    media=soma/12;

    maior=matriz[0][0];
    menor=matriz[0][0];
    printf ("Media dos numeros armazenados: %.2f", media);

    for (lin=0; lin<4; lin++){
        for (col=0; col<3; col++){
            if (matriz[lin][col]>maior){
            maior=matriz[lin][col];
            lin_maior=lin;
            col_maior=col;
            }
            if (matriz[lin][col]<menor){ 
            menor=matriz[lin][col];
            lin_menor=lin;
            col_menor=col;
            }
        }
    }
    printf ("\nO maior número armazenado foi: %i na linha %i e coluna %i", maior, lin_maior, col_maior);
    printf ("\nO menor número armazenado foi:  %i na linha %i e coluna %i", menor, lin_menor, col_menor);
    return 0;
}