#include <iostream>
#include <string.h>
using namespace std;

// Encapsular = public, private ou #protected
class Pessoa{
    public:
    int mat;
    char nome[40];

    protected: 
    public: 
    virtual void CadastrarPessoa(){} // O virtual transforma esse método em abstrato
    virtual void MostrarPessoa(){}
};

class Aluno:public Pessoa{
    // A classe herdada vai ter todos os atributos da classe mãe, mas ela não consegue acessar os privados
    private: 
    float nota;
    
    public:
    void CadastrarPessoa(){ //Métodos com o mesmo nome executando a mesma coisa = polimorfismo
    cout<<"\nDigite uma matricula: ";
    cin>>mat;
    cout<<"Digite o nome: ";
    cin>>nome; 
    cout<<"Digite a nota: ";
    cin>>nota;
    }
    void MostrarPessoa(){
    cout<<"\nMatricula: "<<mat<<"\nNome: "<<nome<<"\nNota: "<<nota;
    }
};
class Professor:public Pessoa{
    private:
    float salario;

    public: 
    void CadastrarPessoa(){
        cout<<"\nDigite uma matricula: ";
        cin>>mat;
        cout<<"Digite o nome: ";
        cin>>nome;
        cout<<"Digite um salario: ";
        cin>>salario;
    }
    void MostrarPessoa(){
        cout<<"\nMatricula: "<<mat<<"\nNome: "<<nome<<"\nSalario: "<<salario;
    }
};

int main(){
    Aluno aluno; 
    Professor prof; // O prof executa o método dentro da classe dele
    cout<<"\nCadastro de Aluno: ";
    aluno.CadastrarPessoa(); // podemos criar objetos da classe herdada
    // aluno.CadastrarAluno();  Podemos acessar tudo da classe pessoa e aluno
    aluno.MostrarPessoa();
    cout<<"\nCadastro de Professor: ";
    prof.CadastrarPessoa();
    // prof.CadastrarProfessor();
    prof.MostrarPessoa();
    return 0;
}