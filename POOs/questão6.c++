#include <iostream>
#include <string.h>
using namespace std;
class Pessoa{
    private:
        string nome, end;
        int idade, dia, mes, ano, dia_atual, mes_atual, ano_atual, idade_anos, idade_meses, idade_dias;

    public: 
    Pessoa(){
        nome=" ";
        end=" ";
        idade=0;
        dia=0; mes=0; ano=0;
        dia_atual=0; mes_atual=0; ano_atual=0;
        idade_anos=0; idade_meses=0; idade_dias;
    }
    void cadastrarAluno(int cont){
        printf("\e[H\e[2J");
        cout<< "Qual o seu nome: " << endl;
        if (cont>0)
        getline(cin, nome);
        getline(cin, nome);
        cout<<"Qual o seu endereco "<<nome<<"? ";
        getline(cin, end);
        cout << "Digite o dia, mes e ano do seu nascimento, respectivamente: "<< endl;
        cin>>dia>>mes>>ano;
        cout << "Digite o dia, mes e ano atuais, respectivamente: "<< endl;
        cin>>dia_atual>>mes_atual>>ano_atual;

        calculaIdade();
    }
    void calculaIdade(){
        if (mes<mes_atual){
            idade_anos=ano_atual-ano;
        }
        else if (mes==mes_atual && dia<dia_atual){
            idade_anos=ano_atual-ano;
        }
        else if (mes==mes_atual && dia==dia_atual){
            idade_anos=(ano_atual-ano)-1;
        }
        else{
            idade_anos=(ano_atual-ano)-1;
        }
    }
    void mostrarAluno(){
        cout<<"Nome: "<<nome<<"\t";
        cout<<"Endereco: "<<end<<"\t";
        cout<<"Data de nascimento: "<<dia<<"/"<<mes<<"/"<<ano<<endl;
        cout<<"Idade: "<<idade_anos<<" anos ";
    }
};

int main(){
    int qtde=0;
    Pessoa *pessoas[10]; //Reservei 10 ponteiros para apontar a 10 alunos
    while (qtde<2){
    pessoas[qtde]=new Pessoa(); // Para reservar uma região de memória para o aluno, já que a variável é um ponteiro
    pessoas[qtde]->cadastrarAluno(qtde);
    qtde++;
    }
    qtde=0;
    cout<<"\n";
    while (qtde<2){
    cout<<"\n";
    pessoas[qtde]->mostrarAluno();
    qtde++;
    }
    return 0;
}