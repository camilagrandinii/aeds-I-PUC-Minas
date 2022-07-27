#include <stdio.h>

int main(){
    char vetorA[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, vetorB[20]={21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40}, aux_a[20], aux_b[20];
    int a, b;
    printf ("Vetor original A: ");
    for (a=0; a<20; a++){
        printf ("%d | ", vetorA[a]);
    }
    printf ("\nVetor original B: ");
    for (a=0; a<20; a++){
    printf ("%d | ", vetorB[a]);
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


    printf ("\n\nVetor trocado A: ");
    for (a=0; a<20; a++){
        printf ("%d | ", vetorA[a]);
    }
    printf ("\nVetor trocado B: ");
    for (a=0; a<20; a++){
        printf ("%d | ", vetorB[a]);
    }
    return 0;
}