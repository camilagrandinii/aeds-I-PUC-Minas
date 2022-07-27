#include <stdio.h>
int leNumero();
void impNumero(int numero);

int leNumero(){
    int resp;
    printf("\nDigite um numero: ");
    scanf("%d", &resp);
    impNumero(resp);
    return resp; 
    }

void impNumero(int numero){
    printf("%d", numero);
    }

int main(){
    int vetor [10];
    for (int i=0; i<10; i++)
    vetor[i]=leNumero();
    return 0;
}