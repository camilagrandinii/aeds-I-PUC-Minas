#include <iostream>
#include <string.h>
using namespace std;

class Aluno{
    private:
        string nome;
        int serie, grau, serie_opcao;
        static int count; 

    public: 
    Aluno(){
        nome=" ";
        serie=0;
        grau=0;
    }
    Aluno (string nome, int serie, int grau){
        this->nome=nome;
        this->serie=serie;
        this->grau=grau;
    }
    void setNome(string nome){
        this->nome=nome;
    }
    string getNome(){
        return nome;
    }
    void setSerie(int serie){
        this->serie=serie;
    }
    int getSerie(){
        return serie;
    }
    void setGrau(int grau){
        this->grau=grau;
    }
    int getGrau(){
        return grau;
    }
    void cadastrarAluno(){
        printf("\e[H\e[2J"); //lima a tela
        cout<< "Entre com o nome do aluno: " << endl;
        getline(cin, nome);
        cout<< "Entre com a serie do aluno: "<< endl;
        cin>>serie;
        cout << "Entre com o grau do aluno: "<< endl;
        cin>>grau;

        count++;
    }
    void mostrarAluno(){
        cout<<"Nome: "<<nome<<"\t";
        cout<<"Serie: "<<serie<<"\t";
        cout<<"Grau: "<<grau<<endl;
    }
    void countAluno(){
        cout << "Numero de alunos cadastrados: "<<count<<endl;
    }
};

int Aluno::count=0; 

void menu(){
    printf("\e[H\e[2J"); 
    cout<< "Menu de opcoes: " << endl;
    cout<< "1 - Para cadastrar aluno" << endl;
    cout<< "2 - Para exibir os alunos cadastrados" << endl;
    cout<< "3 - Para imprimir o numero de alunos cadastrados" << endl;
    cout<< "4 - Para sair" << endl;
}
int main(){
    int opcao, qtde=0;
    string nome_teste;
    Aluno *alunos[10]; //Reservei 10 ponteiros para apontar a 10 alunos
    menu();
    cin>>opcao; cin.ignore();
    while (opcao!=4){
        switch(opcao){
            case 1:
            if (qtde<10){
            alunos[qtde]=new Aluno(); // Para reservar uma região de memória para o aluno, já que a variável é um ponteiro
            alunos[qtde]->cadastrarAluno();
            qtde++;
            } else {
                cout<< "Erro... Nao ha mais espaco para cadastro!"<< endl;
            }
            break;
            
            case 2:
            for (int i=0; i<qtde; i++){
                alunos[i]->mostrarAluno();
            }
            break;

            case 3:
            alunos[0]->countAluno();
            break;
            
            default:
            cout<<"Caractere invalido!!!";
            break;
        }
        getchar();
        menu();
        cin>>opcao; cin.ignore(); //Essa função limpa o buffer
    }
    return 0;
}