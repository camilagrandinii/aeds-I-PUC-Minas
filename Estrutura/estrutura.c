#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Pra poder colocar o strcpy

typedef struct Aluno
{
    int mat;
    char nome[40], endereco[50];
    float nota;
}AlunoNovo; // Poderíamos ter colocado o mesmo nome em cima e em baixo
// Podemos criar qualquer variável desse tipo a partir desse nome

int main(){
    AlunoNovo alu; // A variável alu é do tipo que eu criei
    // O operador ponto permite acessar os membros
    printf ("Digite a sua matricula: ");
    scanf ("%d",&alu.mat);
    fflush(stdin);
    printf ("Digite o nome: ");
    gets (alu.nome);
    fflush(stdin);
    printf ("Digite o endereco: ");
    gets(alu.endereco);
    printf ("Digite a nota: ");
    scanf ("%f", &alu.nota);

    printf ("\nMatricula: %d \nNome: %s \nEndereco: %s \nNota: %.2f", alu.mat, alu.nome, alu.endereco, alu.nota); // Formatamos aqui com base no tipo do membro
    return 0;
}
