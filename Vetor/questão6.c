#include <stdio.h>

int main(){
    int vetorOriginal[10], vetorInvertido[10], i;
    for (i=0; i<10;i++){
    printf ("Digite 10 valores: ");
    scanf ("%i", &vetorOriginal[i]);
    }
    for (i=0; i<10;i++){
    vetorInvertido[i]=vetorOriginal[9-i];
    }
    printf ("\nVetor original: ");
    for (i=0; i<10; i++){
        printf ("%d | ", vetorOriginal[i]);
    }
    printf ("\nVetor invertido: ");
    for (i=0; i<10; i++){
    printf ("%d | ", vetorInvertido[i]);
    }
    return 0;
}