#include <stdio.h>
#include <string.h>

typedef struct Aluno{
    int mat;
    char nome[40], endereco[50];
    float nota[3];
}Aluno;

int main(){
    Aluno alu;

    printf ("Digite a sua matricula: ");
    scanf ("%d",&alu.mat);
    fflush(stdin);
    printf ("Digite o nome: ");
    gets (alu.nome);
    fflush(stdin);
    printf ("Digite o endereco: ");
    gets(alu.endereco);
    for (int i=0; i<3; i++){
    printf ("Digite a nota: ");
    scanf ("%f", &alu.nota);
    }

    printf ("\nMatricula: %d \nNome: %s \nEndereco: %s \nNota: %.f", alu.mat, alu.nome, alu.endereco, alu.nota);
    printf ("\nNotas: ", alu.nota);
    for (int i=0; i<3; i++){
        printf (" %.2f |", alu.nota[i]);
    }
    return 0;
}