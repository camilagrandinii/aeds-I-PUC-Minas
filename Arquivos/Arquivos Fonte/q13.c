#include <stdio.h>
    int main()
{

int matricula, telefone;
char nome[20], opcao, leitura[50];

do{
printf ("Digite seu nome: ");
scanf ("%s", nome);
printf ("Digite sua matricula: ");
scanf ("%i", &matricula);
printf ("Digite seu telefone: ");
scanf ("%i", &telefone);

FILE *arq = fopen("alunosDados.txt", "a+");
fprintf (arq, "Aluno: %s", nome);
fprintf (arq, "\nMatricula: %i", matricula);
fprintf (arq, "\nTelefone: %i\n", telefone);
fclose(arq);

getchar();
printf ("\nDeseja sair? Sim (s) ou nao (n)\n");
scanf (" %c", &opcao);
}while(opcao!='s');

printf ("Deseja ler dados armazenados no arquivo dos alunos? Sim(s) ou nao(n)\n");
scanf (" %c", &opcao);

FILE *arq = fopen("alunosDados.txt", "r");
if (opcao=='s'){
    while (!feof(arq)){
        fscanf(arq, "%[^\n] ", leitura);

        if (ferror(arq))
        printf ("\nErro na leitura da cadeia");
        else if (leitura!="\n" && leitura!=EOF) {
            printf ("%s\n", leitura);
        }
    }
}
fclose(arq);
return 0;
}
