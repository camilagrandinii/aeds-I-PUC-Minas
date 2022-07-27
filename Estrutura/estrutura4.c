#include <stdio.h>
    typedef struct Data{
    int dia, mes, ano;
    }Data;

typedef struct Aluno{
    int mat;
    char nome[40], endereco[50];
    float nota;
    Data dataNascimento; //Estrutura dentro de estrutura
}Aluno;


int main(){
    Aluno alu;
    int i;

    printf ("Digite a sua matricula: ");
    scanf ("%d",&alu.mat);
    fflush(stdin);
    printf ("Digite o nome: ");
    gets (alu.nome);
    fflush(stdin);
    printf ("Digite o endereco: ");
    gets(alu.endereco);
    printf ("Digite a data de nascimento\n");
    printf ("Dia: ");
    scanf ("%d", &alu.dataNascimento.dia);
    printf ("Mes: ");
    scanf ("%d", &alu.dataNascimento.mes);
    printf ("Ano: ");
    scanf ("%d", &alu.dataNascimento.ano);
    printf ("\nDigite a nota: ");
    scanf ("%f", &alu.nota);

    printf ("\nMatricula: %d ", alu.mat);
    printf ("\nNome: %s \nEndereco: %s", alu.nome, alu.endereco);
    printf ("\nData de nascimento: %d/%d/%d", alu.dataNascimento.dia, alu.dataNascimento.mes, alu.dataNascimento.ano);
    return 0;
}