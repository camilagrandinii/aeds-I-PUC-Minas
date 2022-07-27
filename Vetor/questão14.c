#include <stdio.h>
void MaiorMenorTemp (float temp_media[]);
int main(){
    float temp_media[12], maior_ano, menor_ano;
    int i;
    for (i=0; i<12; i++){
    printf ("Digite as temperaturas medias de cada mes do ano: ");
    scanf ("%f", &temp_media[i]);
    }
    MaiorMenorTemp(temp_media);
    return 0;
}
void MaiorMenorTemp (float temp_media[]){
    int i;
    char meses[12][10]={"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    float maior_ano, menor_ano;
    maior_ano=temp_media[0];
    menor_ano=temp_media[0];

    for (i=0; i<12; i++){
        if (temp_media[i]> maior_ano)
        maior_ano=temp_media[i];
        if (temp_media[i]<menor_ano)
        menor_ano=temp_media[i];
    }
for (i=0; i<12; i++){
  if (temp_media[i]==maior_ano)
  printf ("\nA maior temperatura do ano foi %.2f em %s", maior_ano, meses[i]);
  if (temp_media[i]==menor_ano)
  printf ("\nA menor temperatura do ano foi %.2f em %s", menor_ano, meses[i]);
  }
}
    
