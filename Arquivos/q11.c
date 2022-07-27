#include <stdio.h>

int main()
{
   char n[30], leitura[30];
   int vogais = 0;
   FILE *arq = fopen("letras.txt", "w+");
   printf("Digite letras aleatorias: ");
   scanf("%s", n);
   fprintf(arq, "%s", n);
   fclose(arq);

   arq = fopen("letras.txt", "r");
   fscanf(arq, "%[^\n]", &leitura);

   for (int i = 0; i <= strlen(leitura); i++)
   {
     if (leitura[i] == 'a' || leitura[i] == 'e' || leitura[i] == 'i' || leitura[i] == 'o' || leitura[i] == 'u'){
      vogais++;
      }
   }
   printf("O arquivo possui %d vogais", vogais);
   return 0;
}
