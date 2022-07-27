#include <stdio.h>
#include<stdlib.h>
#include <math.h>

int raizes(float a , float b, float c, float *x1, float *x2);
int main(void) {
  double a, b, c, delta=0, x1=0, x2=0;
  printf ("Digite o coeficiente a da equação de segundo grau\n");
  scanf ("%lf", &a);

  if (a == 0) {
    printf ("Não é uma equação de segundo grau");
  }

  else {
  printf ("Digite os coeficientes b e c da equação de segundo grau, respectivamente:\n");
  scanf ("%lf" "%lf", &b, &c);

  raizes(a, b, c, &x1, &x2);
    
  return 0;
    }
}
int raizes(float a , float b, float c, float *x1, float *x2){
    float delta;
    delta = pow (b, 2) - 4*a*c;

    if (delta < 0) {
    printf ("Não existem raízes reais");
    }

    else if (delta == 0) {
    *x1 = (-b / 2*a);
    printf ("Existem duas raízes reais iguais, que são:%lf", *x1); 
    }

    else{
    *x1 = (-b + (sqrt (delta))/2*a);
    *x2 = (-b - (sqrt (delta))/2*a);
    printf ("As duas raízes reais para essa expressão são: %lf %lf", *x1, *x2);
    }
    return 0; 
}

