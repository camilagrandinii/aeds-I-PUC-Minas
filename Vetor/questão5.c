#include <stdio.h>
void PreencheVetor (float vet[]);
void TestePeso(float vet[]);
int main(){
    float vetor[30];
    PreencheVetor(vetor);
    TestePeso(vetor);
return 0;
}
void PreencheVetor(float vet[]){
    int i, peso_maior_70=0; 
    float soma, media_pesos;
    for (i=0; i<5; i++){
        do{
        printf ("%i. Digite o seu peso em Kg: ", i+1);
        scanf ("%f", &vet[i]);
        }while (vet[i]<0 || vet[i]>1000);
        soma+=vet[i];
    }
    for (i=0; i<5; i++){
        if (vet[i]>70)
        peso_maior_70++;
    }
    media_pesos=soma/30;
    printf ("\nAlunos pesando mais que 70Kg: %i", peso_maior_70);
    printf ("\nMedia dos pesos: %.2f", media_pesos);
}
void TestePeso(float vet[]){
    int i;
    float maior_peso=0, menor_peso=500;
    for (i=0; i<5; i++){
        if (vet[i]>maior_peso)
        maior_peso=vet[i];
        if (vet[i]<menor_peso)
        menor_peso=vet[i];
    }
    printf ("\nMaior peso: %.2f Kg", maior_peso);
    printf ("\nMenor peso: %.2f Kg", menor_peso);
}