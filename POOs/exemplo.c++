#include <iostream>
#include <string.h>
using namespace std;

class Aluno{ // criação de objetos 
// se n colocar nada, fica tudo privado (o acesso aos dados e aos métodos)
private:
int mat;
char nome[40];
float nota;

public:
void CadastrarAluno(){
cout<<"Digite uma matricula: ";
cin>>mat;
cout<<"Digite o nome: ";
cin>>nome; //pega só o nome até o primeiro espaço
cout<<"Digite a nota: ";
cin>>nota;
}
void MostrarAluno(){
    cout<<"\nMatricula aluno: "<<mat;
    cout<<"\nNome: "<<nome;
    cout<<"\nNota: "<<nota;
}
};

int main(){
    int num;
    /*
    cout << "Digite um numero: "; //printf
    cin>>num; //scanf 
    cout <<"\nO número digitado foi: "<<num<<"!";*/

    Aluno aluno1, aluno2;
    aluno1.CadastrarAluno();
    aluno2.CadastrarAluno();
    cout <<"\nCadastro de aluno: ";
    aluno1.MostrarAluno();
    cout <<"\n\nCadastro de aluno: ";
    aluno2.MostrarAluno();
    return 0;
}