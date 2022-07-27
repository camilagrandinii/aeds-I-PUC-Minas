#include <stdio.h>

int main(void) {
  float cont=0, massa, aux, tempo_segundos=0, tempo_minutos=0, tempo_horas=0;

  printf ("Digite a massa inicial(g): ");
  scanf ("%f", &massa);

  do {
  massa = massa/2;

  cont++;
  }while (massa>=0.5);
  
  tempo_segundos=cont*50;
  tempo_minutos=tempo_segundos/60;
  tempo_horas=tempo_minutos/60;

  printf ("\nO tempo necessário para isso ocorrer é de: %.1f segundos", tempo_segundos);

  printf ("\nO tempo necessário para isso ocorrer é de: %.1f minutos", tempo_minutos);

  printf ("\nO tempo necessário para isso ocorrer é de: %.2f horas", tempo_horas);

  return 0;
}