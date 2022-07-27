#include <stdio.h>

int main()
{
    char texto[50];
    FILE *arq;
    arq = fopen("texto.txt", "w");
    printf ("Digite um texto: ");
    scanf("%s", texto);   
    fputs(texto, arq);
    printf("\nArquivo criado");
    return 0;
}
