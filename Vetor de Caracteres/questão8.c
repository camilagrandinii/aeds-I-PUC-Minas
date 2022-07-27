#include <stdio.h>
#include <string.h>

void Data (int dia, int mes, int ano);

int main(){
    int dia, mes, ano;

    printf ("Dia: ");
    scanf ("%i", &dia);
    printf ("Mes: ");
    scanf ("%i", &mes);
    printf ("Ano: ");
    scanf ("%i", &ano);

    Data(dia, mes, ano);
    return 0;
}
void Data (int dia, int mes, int ano){
    char meses[12][10]={"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    printf ("A data e: %i/%s/%i\n", dia, meses[mes-1], ano);
}