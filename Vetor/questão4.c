#include <stdio.h>
void PreencheVetor (int vet[]);
void TemperaturaMedia(int vet[]);
int main(){
    int vetor[30];
    PreencheVetor(vetor);
    TemperaturaMedia(vetor);
return 0;
}
void PreencheVetor (int vet[]){
    int i, maior_numero=0, menor_numero=80;
    for (i=0; i<5; i++){
        do{
        printf ("Digite a temperatura no dia %i: ", i+1);
        scanf ("%i", &vet[i]);
        }while (vet[i]<15 || vet[i]>40);

        if (vet[i]>maior_numero){
            maior_numero=vet[i];
        }
        if (vet[i]<menor_numero){
            menor_numero=vet[i];
        }
    }
    printf ("\nMaior temperatura: %i", maior_numero);
    printf ("\nMenor temperatura: %i", menor_numero);
}
void TemperaturaMedia(int vet[]){
    int i, temp_menor_media=0;
    float soma=0, temp_media;
    for (i=0; i<5; i++){
        soma+=vet[i];
    }
    temp_media=soma/30;
    for (i=0;i<5; i++){
        if(vet[i]<temp_media){
            temp_menor_media++;
        }
    }
    printf ("\nA temperatura media foi de: %.2f", temp_media);
    printf ("\nA temperatura foi menor que a media por %i dia(s)", temp_menor_media);
}