#include <stdio.h>
#include <string.h>

typedef struct Aluno{
    int mat;
    char nome[40], endereco[50];
    float nota;
}Aluno;

typedef struct Disciplina {
    int codigo, cargaHoraria;
    char nomeDisciplina[50];
}Disciplina;

typedef struct Professor {
    int mat;
    char nome[40];
    float salario;
}Professor;

void CadastraAluno(Aluno *aluno);
void MostrarAluno(Aluno[]);
int main(){
    Aluno alu[5];
    Professor prof[5];
    Disciplina disc[5];

    int opcao, i;
    printf ("\nMenu de opcoes: \n1-Cadastrar aluno \n2-Mostrar aluno \n3-Sair");
    printf ("\nEscolha sua opcao: ");
    scanf ("%i", &opcao);

    do{
    switch (opcao)
    {
    case 1:
    CadastraAluno (&alu[i]);// só uma posição do vetor não é parâmetro por referência
    i++;
    break;
    
    case 2:
    MostrarAluno(alu);
    break;

    case 3:
    printf ("Saindo do programa...");
    break;

    default:
    printf ("Opcao inválida!!!");
    break;
    }
    }while (opcao!=3);
}
void CadastraAluno(Aluno *aluno){
    printf ("Digite a sua matricula: ");
    scanf ("%d",&aluno->mat);// ponteiro para estrutura nós acessamos com ->
    // Também podemos usar scanf ("%d",&(*aluno).mat);
    fflush(stdin);
    printf ("Digite o nome: ");
    gets (aluno->nome);
    fflush(stdin);
    printf ("Digite o endereco: ");
    gets(aluno->endereco);
    printf ("Digite a nota: ");
    scanf ("%f", &aluno->nota);
}
void MostrarAluno(Aluno aluno[]){
    int i;
    for (i=0; i<5; i++){
    printf ("Cadastro de aluno: ");
    printf ("\nMatricula: %d \nNome: %s \nEndereco: %s \nNota: %.2f", aluno[i].mat, aluno[i].nome, aluno[i].endereco, aluno[i].nota);
    }
}