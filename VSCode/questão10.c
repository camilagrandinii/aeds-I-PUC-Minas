#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, i, soma = 0;

   printf("Digite um numero: ");
   scanf("%d", &num);
   for (i = 1; i <= num; i++)
   {
      if (num % i == 0)
      {
         printf("Divisor %i\n", i);
         soma += i;
      }
   }
   FILE *arq = fopen("texto.txt", "w");
   if (arq==NULL){
      printf ("Opss... deu um erro no arquivo.\n");
      return -1;
   }

   fprintf (arq, "A soma é igual a: %i", soma);
   return 0;
}