#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, i, soma = 0;

   printf("Digite um numero: ");
   scanf("%d", &num);
   printf ("Divisores: \n");
   for (i = 1; i <= num; i++)
   {
      if (num % i == 0)
      {
         printf("%i\n", i);
         soma += i;
      }
   }
   FILE *arq = fopen("soma.txt", "w");
   fprintf (arq,"A soma é igual a: %i", soma);  
   fclose (arq);
   return 0;
}
