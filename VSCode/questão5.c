#include <stdio.h>

int main()
{
    FILE *arq;
    arq = fopen("numero.txt", "w");
    printf("\nArquivo criado");
    fputc('1', arq);
    fputc('\n', arq);
    fputc('2', arq);
    fputc('\n', arq);
    fputc('3', arq);
    fputc('\n', arq);
    fputc('4', arq);
    fputc('\n', arq);
    fputc('5', arq);
    fputc('\n', arq);
    fputc('6', arq);
    fputc('\n', arq);
    fputc('7', arq);
    fputc('\n', arq);
    fputc('8', arq);
    fputc('\n', arq);
    fputc('9', arq);
    fputc('\n', arq);
    fputs("10", arq);
    return 0;
}