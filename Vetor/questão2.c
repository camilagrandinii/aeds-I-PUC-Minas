#include <stdio.h>

int main(){
    int numero[6], i, pares=0, impar=0;
    for(i=0; i<6; i++){
        printf ("Digite um numero: ");
        scanf ("%i", &numero[i]);
        }

        printf ("\nPares: ");
    for(i=0; i<6; i++){        
        if (numero[i]%2==0){
            pares++;
            printf ("%i | ", numero[i]);
        }        

        else if (numero[i]==0){
            printf (" 0 ");
        }
    }
    printf ("\nImpares: ");
    for(i=0; i<6; i++){        
        if (numero[i]%2!=0){
            impar++;
            printf ("%i | ", numero[i]);
        }
        }// Fim do for
        printf ("\n%i numeros pares", pares);
        printf ("\n%i numeros impares", impar);
    return 0;
}