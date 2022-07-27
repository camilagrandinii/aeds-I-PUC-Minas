#include <iostream>
#include <string.h>
using namespace std;

class ALUNO{
public:
int grau, serie, n_cadastros;
string nome; // Vetor de caracteres dinâmico

ALUNO(){
    n_cadastros++;
}

public:
void CadastrarAluno(ALUNO *alunos){
cout<<"Digite o seu grau: ";
cin>>grau;
cout<<"Digite o seu nome: ";
cin>>nome;
cout<<"Digite a sua serie: ";
cin>>serie;
}
void MostrarAluno(){
    cout<<"\nGrau do aluno: "<<grau;
    cout<<"\nNome: "<<nome;
    cout<<"\nSerie: "<<serie;
}
void AlunosCadastrados(){
    cout<<"\nAlunos cadastrados: "<<n_cadastros;
}
};

void CadastrarAluno(ALUNO *alunos[]);
void MostrarAluno();
void AlunosCadastrados();

int main(){
    ALUNO *alunos[10][1];
    for (int lin=0; lin<10; lin++){
        for (int col=0; col<1; col++){
            CadastrarAluno(&alunos[lin][col]);
        }
    }
    for (int lin=0; lin<10; lin++){
        for (int col=0; col<1; col++){
            MostrarAluno();
        }
    }
    AlunosCadastrados();
    return 0;
}