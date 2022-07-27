#include <stdio.h>
int main (){
    int idade, cont, altura_1020, idade_total=0;
    float altura=0, peso=0, media_idades=0, peso_sup90=0, altura_190;
    for (cont=1;cont<=2;cont++){
    printf ("\n%i- Digite sua idade: ", cont);
    scanf ("%i", &idade);
    
    idade_total+=idade;

    printf ("\nDigite sua altura em cm: ");
    scanf ("%f", &altura);

    if (altura>190 && idade>10 && idade<30){
    altura_190++;
    }
    else {
    altura_190 = 0;
    }

    printf ("\nDigite seu peso: ");
    scanf ("%f", &peso);

    if (peso>90 && altura<150){
    peso_sup90++;
    }
    else {
    altura_190 = 0;
    }

    }
   media_idades = idade_total/10;
   printf ("\nMédia das idades: %.1f", media_idades);  
   printf ("\nPessoas com peso superior a 90 e altura inferior a 1,5 metros: %.f", peso_sup90);
   printf ("\nPessoas com mais de 1,90 metros que tem entre 10 e 30 anos: %.f",altura_190);   
  return 0;
}