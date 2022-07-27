/* Na hora de passar um vetor como parâmetro de uma função somente passamos o nome dele, não precisamos usar &
nem *, ele já se comporta como uma passagem por referência 
Não precisamos passar o tamanho do vetor
*/
#include <stdio.h>
#include <stdlib.h>
void PreencheVetor (int vet[]); 
void ImprimeVetor (int vet[]);
int main(){
   int vetor[8];
   PreencheVetor(vetor);
   ImprimeVetor(vetor);

    return 0;
}
void PreencheVetor (int vet[]){
    int i;
    for (i=0; i<8; i++){
        printf ("Digite um numero: ");
        scanf ("%i", &vet[i]);
    }
}// fim da função
void ImprimeVetor (int vet[]){
    int i;
    printf ("Valores do vetor: ");
    for (i=0; i<8; i++){
        printf ("%d | ", vet[i]);
    }
}// fim da função
    