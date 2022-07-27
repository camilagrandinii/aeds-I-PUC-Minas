#include <stdio.h>

int main(){
    int dia, mes[2], ano;
    printf ("Digite o dia: ");
    scanf ("%i", &dia);
    for (int i=0; i<2; i++){
    printf ("Digite o mes digito por digito: ");
    scanf ("%i", &mes[i]);
    }
    printf ("Digite o ano: ");
    scanf ("%i", &ano);

    if (mes[1]==1)
    printf ("%i/de janeiro/%i", dia, ano);  
    else if (mes[1]==2)
    printf ("%i/de fevereiro/%i", dia, ano); 
    else if (mes[1]==3)
    printf ("%i/de março/%i",dia, ano); 
    else if (mes[1]==4)
    printf ("%i/de abril/%i", dia, ano); 
    else if (mes[1]==5)
    printf ("%i/de maio/%i", dia, ano); 
    else if (mes[1]==6)
    printf ("%i/de junho/%i", dia, ano); 
    else if (mes[1]==7)
    printf ("%i/de julho/%i", dia, ano); 
    else if (mes[1]==8)
    printf ("%i/de agosto/%i", dia, ano); 
    else if (mes[1]==9)
    printf ("%i/de setembro/%i", dia, ano); 
    else if (mes[1]==0)
    printf ("%i/de outubro/%i", dia, ano); 
    else if (mes[0]==1)
    printf ("%i/de novembro/%i", dia, ano); 
    else if (mes[0]==2)
    printf ("%i/de dezembro/%i", dia, ano); 
    return 0;
}