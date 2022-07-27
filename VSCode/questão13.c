#include <stdio.h>
    int main()
{

int matricula, telefone;
char nome[20], opcao, leitura[35];

do{
printf ("Digite seu nome: ");
scanf ("%s", nome);
printf ("Digite sua matricula: ");
scanf ("%i", &matricula);
printf ("Digite seu telefone: ");
scanf ("%i", &telefone);

FILE *arq = fopen("alunosDados.txt", "r+");
fprintf (arq, "Aluno: %s", nome);
fprintf (arq, "Matricula: %s", matricula);
fprintf (arq, "Telefone: %s", telefone);
fclose(arq);

printf ("\nDeseja sair? Sim (s) ou nao (n)\n");
scanf (" %c", &opcao);
}while(opcao!='s');

printf ("Voce deseja ler dados armazenados no arquivo dos alunos? Sim(s) ou nao(n)\n");
scanf (" %c", &opcao);
if (opcao=='s'){
    FILE *arq = fopen("alunosDados.txt", "r");
    fscanf (arq, "%[^\n]", &leitura);
    printf ("\n%s", leitura);
}
    return 0;
}