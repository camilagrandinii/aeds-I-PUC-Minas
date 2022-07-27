#include <iostream>
#include <string.h>
using namespace std;

class Aluno{ 
// se n colocar nada, fica tudo privado (o acesso aos dados e aos métodos)
// Encapsular = public, private ou #protected
private:
int mat;
char nome[40];
float nota;

public:
Aluno(){ // É o construtor da função com o mesmo nome da classe
//Vamos usar para inicializar o objeto com alguns dados
//O programa vai saber qual função usar devido a presença ou não de parâmetros na inicialização da variável
mat=1;
strcpy(nome, "Pietra");
nota=89;
}
Aluno (int m, char no[40], float nt){ //Construtor que recebe parâmetros
//Esse caso com dois construtores mas que fazem coisas diferentes é chamado polimorfismo
mat=m;
strcpy(nome, no);
nota=nt;
}
void CadastrarAluno();
void MostrarAluno();
};

void Aluno::CadastrarAluno(){
cout<<"Digite uma matricula: ";
cin>>mat;
cout<<"Digite o nome: ";
cin>>nome; //pega só o nome até o primeiro espaço
cout<<"Digite a nota: ";
cin>>nota;
}
void Aluno::MostrarAluno(){
cout<<"\nMatricula aluno: "<<mat;
cout<<"\nNome: "<<nome;
cout<<"\nNota: "<<nota;
}

int main(){
    Aluno aluno1, aluno2, aluno3, aluno4(23,"Joana", 83); //Na hora que declaramos um objeto, o construtor é chamado, automaticamente
    // Aluno 4 está usando a função construtora para ser criado
    // Se só tiver a função com parâmetros ela iria reclamar dessa incialização de variáveis
    aluno1.CadastrarAluno();
    aluno2.CadastrarAluno();
    cout <<"\nCadastro de aluno: ";
    aluno1.MostrarAluno();
    cout <<"\n\nCadastro de aluno: ";
    aluno2.MostrarAluno();
    cout <<"\n\nCadastro de aluno: ";
    aluno3.MostrarAluno();
    cout <<"\n\nCadastro de aluno: ";
    aluno4.MostrarAluno();
    return 0;
}