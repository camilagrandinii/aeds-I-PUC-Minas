#include <stdio.h>

int main (){
char codigo;
float valor_total_vista = 0, valor_total_prazo = 0, valor=0, valor_prazo=0, valor_total;
int cont;
for (cont=1; cont<=15; cont++){
  printf ("\nVoce deseja pagar a vista(v) ou a prazo(p)? ");
  scanf (" %c", &codigo);
  
  if (codigo == 'v'){
  printf ("Digite o valor das compras: ");
  scanf ("%f", &valor);
  valor_total_vista = valor_total_vista+valor;
  }

  else if (codigo == 'p'){
  printf ("Digite o valor das compras: ");
  scanf ("%f", &valor);

  valor_total_prazo+=valor;

  }
  }
  valor_total = valor_total_prazo+valor_total_vista;

  valor_prazo = valor_total_prazo/3;

  printf ("\nO valor total das compras à vista será de: %.2f", valor_total_vista);
  printf ("\nO valor total das compras efetuadas é de: %.2f", valor_total);
  printf ("\nO valor total das compras a prazo sera de: %.2f", valor_total_prazo);
  printf ("\nO valor da primeira prestacao das compras a prazo juntas sera de: %.2f\n\n", valor_prazo);
}
