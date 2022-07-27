#include <stdio.h> 
int main (){
    int cont, idade, faixa1=0, faixa2=0, faixa3=0, faixa4=0, faixa5=0; 
    float porcen_pri, porcen_ul;

    for (cont=1; cont<9; cont++){
    printf ("Digite a sua idade:");
    scanf ("%i",&idade);
    if (idade<15){
    faixa1=faixa1+1;
    }
    else if (16<=idade && idade<=30){
    faixa2=faixa1+1;
    }
    else if (31<=idade && idade<=45){
    faixa3=faixa1+1;
    }
    else if (46<=idade && idade<=60){
    faixa4=faixa1+1;
    }
    else if (idade>60){
    faixa5=faixa1+1;
    }
    
 }
    printf ("\n Existem %i pessoas na faixa etaria 1", faixa1);
    printf ("\n Existem %i pessoas na faixa etaria 2", faixa2);
    printf ("\n Existem %i pessoas na faixa etaria 3", faixa3);
    printf ("\n Existem %i pessoas na faixa etaria 4", faixa4);
    printf ("\n Existem %i pessoas na faixa etaria 5", faixa5);

    porcen_pri = (faixa1*100)/8;
    porcen_ul = (faixa5*100)/8;

    printf ("\nAs pessoas na primeira faixa correspondem a %.1f %% do total", porcen_pri);
    printf ("\nAs pessoas na ultima faixa correspondem a %.1f %% do total", porcen_ul);
    return 0;
}
