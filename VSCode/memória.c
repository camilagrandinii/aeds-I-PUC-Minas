#include <stdio.h>

int main(){
    FILE *arq;
    char nome [30], matricula[5];
    arq = fopen("aluno.txt", "w");
    printf ("\nArquivo criado");

    printf ("\nDigite seu nome: ");
    gets(nome);
    printf ("Digite sua matricula: ");
    gets(matricula);
    fputs(nome, arq);
    fputc('*', arq);
    fputs(matricula, arq);
    fputc('*', arq);
    fputc('\n', arq);
    printf ("Cadastro Realizado!");
    return 0;
}