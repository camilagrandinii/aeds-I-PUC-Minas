#include <stdio.h>

int main(){
    int data[8];

    do{
    for (int i=0; i<8; i++){
    printf ("Digite um data, digito por digito(sem barras): ");
    scanf ("%i", &data[i]);
    }
    
    }while (data[1]<0 || data[2]<0 || data[3]<0 || data[4]<0 || data[5]<0 || data[6]<0 || data[7]<0);

    if (data[3]==1)
    printf ("%i%i/de janeiro/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[3]==2)
    printf ("%i%i/de fevereiro/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[3]==3)
    printf ("%i%i/de março/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[3]==4)
    printf ("%i%i/de abril/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[3]==5)
    printf ("%i%i/de maio/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[3]==6)
    printf ("%i%i/de junho/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[3]==7)
    printf ("%i%i/de julho/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[3]==8)
    printf ("%i%i/de agosto/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[3]==9)
    printf ("%i%i/de setembro/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[4]==0)
    printf ("%i%i/de outubro/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[4]==1)
    printf ("%i%i/de novembro/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    else if (data[3]==2)
    printf ("%i%i/de dezembro/%i%i%i%i", data[0], data[1], data[4], data[5], data[6], data[7]);
    return 0;
}