#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq, *arq2, *arq3; /*Declaração de ponteiros*/
   char leitura2[30], leitura[30]; /*Declaração de leituras*/

   arq = fopen("texto.txt", "r");   
   if (arq==NULL){
      printf ("Opss... deu um erro no arquivo 1.\n");
      return -1;
   }
   fscanf (arq, "%[^\n]", leitura);
   printf ("\n%s", leitura);
   fclose(arq);

   arq2 = fopen ("aluno.txt", "r");
   if (arq2==NULL){
      printf ("Opss... deu um erro no arquivo 2.\n");
      return -1;
   }
   fscanf (arq2, "%[^\n]", leitura2);
   printf ("%s", leitura2);
   fclose(arq2);

   arq3 = fopen("saida.txt", "w");
   fprintf (arq3, "%s", leitura);
   fprintf (arq3, " %s", leitura2);
   fclose (arq3);
   return 0;
}
