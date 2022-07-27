#include <iostream>
#include <string.h>
using namespace std;

class tempo{
public:
int hora_entrada, hora_saida;
float valor_cobrado;

public: 
void setHora(){
    cout<<"Hora de entrada: ";
    cin>>hora_entrada;
    cout<<"Hora saida: ";
    cin>>hora_saida;
}
void valorCobrado(){
    valor_cobrado=hora_saida-hora_entrada;
    cout<<"Valor cobrado: "<<valor_cobrado;
}
};
class Estacionamento{
    private:
        int num, hora_entrada, hora_saida;
        string marca;

    public: 
    Estacionamento(){
        num=0;
        hora_entrada=0;
        hora_saida=0;
        marca="";
    }
    void cadastrarCarro(){
        printf("\e[H\e[2J");
        cout<< "Marca: " << endl;
        getline(cin, marca);
        cout<<"Placa num: ";
        cin>>num;
    }
    void mostrarCarro(){
        cout<<"Numero da placa: "<<num<<"\t";
        cout<<"Marca: "<<marca<<"\t";
        cout<<"Hora entrada: "<<hora_entrada<<"\t";
        cout<<"Hora saida: "<<hora_saida<<"\t";
    }
};

void menu(){
    printf("\e[H\e[2J"); 
    cout<< "Menu de opcoes: " << endl;
    cout<< "1 - Para cadastrar carro" << endl;
    cout<< "2 - Para exibir os carros cadastrados" << endl;
    cout<< "3 - Para sair" << endl;
}

int main(){
    int qtde=0, opcao;
    string comida;
    Estacionamento *carros[10]; 
    tempo *carros_1[10];
    menu();
    cin>>opcao; cin.ignore();
    while (qtde!=3){
        switch (opcao)
        {
        case 1:
        if (qtde<10) {
        carros[qtde]=new Estacionamento(); 
        carros[qtde]->cadastrarCarro();
        carros_1[qtde]=new tempo();
        carros_1[qtde]->setHora();
        qtde++;
        }
        else {
        cout<< "Erro... Nao ha mais espaco para cadastro!"<< endl;
        }
        break;

        case 2:
        for (int i=0; i<qtde; i++){
        carros[i]->mostrarCarro();
        carros_1[i]->valor_cobrado();
        }
        break;
        
        default:
            cout<<"Caractere invalido!!!";
        break;
        }
        getchar();
        menu();
        cin>>opcao; cin.ignore();
    }
    return 0;
}