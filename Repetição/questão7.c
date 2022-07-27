#include <stdio.h>
int main (){
    int idade, cont, sup_50=0, altura_1020;
    float altura=0, peso=0, altura_total=0, media_altura=0, peso_inf40=0, peso_inf40_porcen=0;
    for (cont=1;cont<=2;cont++){
    printf ("%i-Digite sua idade: ", cont);
    scanf ("%i", &idade);
    
    if (idade>50){
    sup_50++;
    }
    else if (idade<50){
    sup_50 = 0;
    } 
    
    else if (idade>10 && idade<20){
    altura_total = altura_total+altura;
    altura_1020++;
    media_altura = (altura_total)/altura_1020;
    }
    printf ("\nDigite sua altura em cm: ");
    scanf ("%f", &altura);
    printf ("\nDigite seu peso: ");
    scanf ("%f", &peso);
    printf ("\n");

    if (peso<40){
    peso_inf40++;
    }

    }
    peso_inf40_porcen = (peso_inf40*100)/5;
    printf ("Pessoas com mais de 50: %.i", sup_50);
    printf ("\nMedia das alturas de pessoas com idade entre 10 e 20 anos: %.f", media_altura); 
    printf ("\nPessoas com peso inferior a 40Kg: %.f %%", peso_inf40_porcen);   
    return 0;
}