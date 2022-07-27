#include <iostream>
#include <string.h>
using namespace std;

class Empresa{
    private:
        string nome, end, cid, est;
        int cep, telefone;

    public: 
    Empresa(){
        nome="";
        end="";
        cid="";
        est="";
        cep=0;
        telefone=0;
    }
    Empresa(string nome, string end, string cidade, string estado, int cep, int telefone){
        nome=nome;
        end=end;
        cid=cidade;
        est=estado;
        cep=cep;
        telefone=telefone;
    }
    void get(){
        printf("\e[H\e[2J");
        cout<< "Nome: " << endl;
        getline(cin, nome);
        cout<<"Endereco: ";
        getline(cin, end);
        cout<<"Cidade: ";
        getline(cin, cid);
        cout<<"Estado: ";
        getline(cin, est);
        cout<<"CEP: ";
        cin>>cep;
        cout<<"Telefone: ";
        cin>>telefone;

    }
    void print(){
        cout<<"Nome: "<<nome<<"\t";
        cout<<"Endereco: "<<end<<"\t";
        cout<<"Cidade: "<<cid<<"\t";
        cout<<"Estado: "<<est<<"\t";
        cout<<"CEP: "<<cep<<"\t";
        cout<<"Telefone: "<<telefone;
    }
};
class Restaurante:public Empresa{
private:
        string tipo_comida;
        float preco_medio;

    public: 
    Restaurante(){
        tipo_comida=" ";
        preco_medio=0;
    }
    Restaurante(string tipo_comida, float preco_medio){
        tipo_comida=tipo_comida;
        preco_medio=preco_medio;
    }
    void get(){
        printf("\e[H\e[2J");
        cout << "Tipo de comida que servem? "<< endl;
        getline(cin, tipo_comida);
        cout << "Qual o preco medio? "<< endl;
        cin>>preco_medio;
    }
    void print(){
        cout<<"Tipo de comida: "<<tipo_comida<<"\t"<<endl;
        cout<<"Preco medio: "<<preco_medio;
    }
};
void menu(){
    printf("\e[H\e[2J"); 
    cout<< "Menu de opcoes: " << endl;
    cout<< "1 - Para cadastrar empresa" << endl;
    cout<< "2 - Para exibir os empresas cadastrados" << endl;
    cout<< "3 - Para cadastrar restaurante" << endl;
    cout<< "4 - Para exibir os restaurantes cadastrados" << endl;
    cout<< "5 - Para sair" << endl;
}

int main(){
    int qtde=0, opcao, cont=0;
    string comida;
    Empresa *empresas[10]; 
    Restaurante *restaurantes[10];
    menu();
    cin>>opcao; cin.ignore();
    while (qtde!=5){
        switch (opcao)
        {
        case 1:
        if (qtde<10) {
        empresas[qtde]=new Empresa(); 
        empresas[qtde]->get();
        qtde++;
        }
        else {
        cout<< "Erro... Nao ha mais espaco para cadastro!"<< endl;
        }
        break;

        case 2:
        for (int i=0; i<qtde; i++){
        empresas[i]->print();
        }
        break;
        
        case 3:
        if (qtde<10) {
        restaurantes[cont]=new Restaurante(); 
        restaurantes[cont]->get();
        cont++;
        }
        else {
        cout<< "Erro... Nao ha mais espaco para cadastro!"<< endl;
        }
        break;

        case 4:
        for (int i=0; i<cont; i++){
        restaurantes[i]->print();
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