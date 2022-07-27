#include <iostream>
#include <string.h>
using namespace std;
class Restaurante{
    private:
        string nome, end, tipo_comida;
        float preco_medio;

    public: 
    Restaurante(){
        nome=" ";
        end=" ";
        tipo_comida=" ";
        preco_medio=0;
    }
    Restaurante(string nome, string end, string tipo_comida, float preco_medio){
        nome=nome;
        end=end;
        tipo_comida=tipo_comida;
        preco_medio=preco_medio;
    }
    void setNome(string nome){
        this->nome=nome;
    }
    string getNome(){
        return nome;
    }
    void cadastrarRestaurante(){
        printf("\e[H\e[2J");
        cout<< "Qual o nome: " << endl;
        getline(cin, nome);
        cout<<"Qual o endereco "<<nome<<"? ";
        getline(cin, end);
        cout << "Tipo de comida que servem? "<< endl;
        getline(cin, tipo_comida);
        cout << "Qual o preco medio? "<< endl;
        cin>>preco_medio;
    }
    void mostrarRestaurante(){
        cout<<"Nome: "<<nome<<"\t";
        cout<<"Endereco: "<<end<<"\t";
        cout<<"Tipo de comida: "<<tipo_comida<<"\t"<<endl;
        cout<<"Preco medio: "<<preco_medio;
    }
};

void menu(){
    printf("\e[H\e[2J"); 
    cout<< "Menu de opcoes: " << endl;
    cout<< "1 - Para cadastrar restaurante" << endl;
    cout<< "2 - Para exibir os restaurantes cadastrados" << endl;
    cout<< "3 - Para sair" << endl;
}

int main(){
    int qtde=0, opcao;
    string comida;
    Restaurante *restaurantes[10]; 
    menu();
    cin>>opcao; cin.ignore();
    while (qtde!=3){
        switch (opcao)
        {
        case 1:
        if (qtde<10) {
        restaurantes[qtde]=new Restaurante(); 
        restaurantes[qtde]->cadastrarRestaurante();
        qtde++;
        }
        else {
        cout<< "Erro... Nao ha mais espaco para cadastro!"<< endl;
        }
        break;

        case 2:
        for (int i=0; i<qtde; i++){
        restaurantes[i]->mostrarRestaurante();
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
    cout<<"Que tipo de comida voce deseja? ";
    getline (cin, comida);
    for (int i=0; i<qtde; i++){
        if (restaurantes[i]->getNome().compare(comida)==0){
        restaurantes[i]->mostrarRestaurante();
        i=qtde;
    }
    }
    return 0;
}