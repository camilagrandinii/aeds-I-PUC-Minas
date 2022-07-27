#include <stdio.h>
#include <string.h>
    
typedef struct Data{
int dia, mes, ano;
}Data;

typedef struct Aluno{
    int mat;
    char nome[40], endereco[50];
    float nota[3];
    Data dataNascimento;
}Aluno;

Aluno CadastrarAluno();
void MostrarAluno(Aluno aluno);

int main(){
    Aluno aluno;
    aluno = CadastrarAluno();    
    MostrarAluno(aluno);
   
    return 0;
}
Aluno CadastrarAluno(){
    Aluno alu;

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
    return alu;
}
void MostrarAluno(Aluno aluno){
    printf ("\nMatricula: %d ", aluno.mat);
    printf ("\nNome: %s \nEndereco: %s", aluno.nome, aluno.endereco);
    printf ("\nData de nascimento: %d/%d/%d", aluno.dataNascimento.dia, aluno.dataNascimento.mes, aluno.dataNascimento.ano);
}