#include <stdio.h>

int main(void) {
  int matriz[6][4], lin, col, cont_maior30=0, matriz2[6][4];

  for (lin=0; lin<6; lin++){
    for (col=0; col<4; col++){
      printf ("Digite um valor para a posicao [%d][%d]: ", lin, col);
      scanf ("%i", &matriz[lin][col]);
    }
  }
  
  printf ("\nElementos da matriz maiores que 30:");
  for (lin=0; lin<6; lin++){
  for (col=0; col<4; col++){
      if (matriz[lin][col]>30){
        printf ("%d\t", matriz[lin][col]);
        cont_maior30++;
      }
    }
  }
  printf ("\nEssa matriz possui %d numero(s) maiores que 30", cont_maior30);
  for (lin=0; lin<6; lin++){
  for (col=0; col<4; col++){
      if (matriz[lin][col]!=30){
        matriz2[lin][col]=matriz[lin][col];
      }
      else  {
        matriz2[lin][col]=0;
      }

      } // fim do for de dentro
    }// fim do for de fora

  printf ("\nMatriz 1: ");
  for (lin=0; lin<6; lin++){
    printf ("\n");
  for (col=0; col<4; col++){
    printf ("%d\t", matriz[lin][col]);
      } 
    }

    printf ("\nMatriz 2: ");
    for (lin=0; lin<6; lin++){
    printf ("\n");
    for (col=0; col<4; col++){
    printf ("%d\t", matriz2[lin][col]);
      } 
    }
  return 0;
}