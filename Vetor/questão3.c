#include <stdio.h>

int main(){
    int quantidade=0, cont=0, positiv=0, neg=0;
        printf ("Quantos numeros voce deseja digitar? ");
        scanf ("%i", &quantidade);
    float numeros [quantidade];

    for (cont=0; cont<quantidade; cont++){
        printf ("Digite o numero: ");
        scanf ("%f", &numeros[cont]);
    }
    printf ("\nConteudo do vetor: ");

    for(cont=0; cont<quantidade; cont++){        
        printf ("%.2f ", numeros[cont]);
        if (numeros[cont]>0){
            positiv++;
        }      
        else if (numeros[cont]<0){
            neg++;
        }  
    }// Fim do for

        printf ("\nQuantidade de positivos: %i", positiv);
        printf ("\nQuantidade de negativos: %i", neg);
    return 0;
}