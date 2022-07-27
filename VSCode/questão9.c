#include <stdio.h>

int main()
{
    FILE *arq, *arq2, *arq3; /*Declaração de ponteiros*/
    char leitura2[30], leitura[30]; /*Declaração de leituras*/

    arq = fopen("texto.txt", "r+");   
    
    if (arq==NULL){
      printf ("Opss... deu um erro no arquivo.\n");
      return -1;
   }
    arq2 = fopen ("aluno.txt", "r");
        
    if (arq2==NULL){
      printf ("Opss... deu um erro no arquivo.\n");
      return -1;
   }
    fscanf (arq2, "%s", &leitura2);

    fscanf (arq, "%[^\n]", &leitura);

    fclose(arq);
    fclose(arq2);

    arq3 = fopen("saida.txt", "w");
    fprintf (arq3, "%s", leitura2);
    fprintf (arq3, "\n%s", leitura);
    fclose (arq3);

   return 0;
}