#include <stdio.h>
#include <stdlib.h>

int main(){
    char vetorA[20], vetorB[20], aux_a[20], aux_b[20];
    int a, b;
    for (a=0; a<20; a++){
    printf ("Digite o valor %d para o vetor A: ", a+1);
    scanf(" %c", &vetorA[a]);
    }
    for (a=0; a<20; a++){
    printf ("Digite o valor %d para o vetor B: ", a+1);
    scanf(" %c", &vetorB[a]);
    }

    for (a=0; a<20; a++){
    aux_a[a]=vetorA[a];
    aux_b[a]=vetorB[a];
    }
    
    for (a=0, b=19; a<20;a++, b--){
    vetorA[a]=aux_b[b];
    }
    for (a=0, b=19; a<20;a++, b--){
    vetorB[a]=aux_a[b];
    }
    
    printf ("\nVetor A: ");
    for (a=0; a<20; a++){
        printf ("%c | ", aux_a[a]);
    }
    printf ("\nVetor trocado A: ");
    for (a=0; a<20; a++){
        printf ("%c | ", vetorA[a]);
    }
    printf ("\n\nVetor B: ");
    for (a=0; a<20; a++){
        printf ("%c | ", aux_b[a]);
    }
    printf ("\nVetor trocado B: ");
    for (a=0; a<20; a++){
        printf ("%c | ", vetorB[a]);
    }
    return 0;
}