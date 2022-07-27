
#include<iostream>
#include<conio.h>
#include<string>
 using namespace std;
 
  class Pessoa
   { string nome;
     string endereco;
     int dia;
     int mes;
     int ano;
    public:
      Pessoa(){
       nome = "";
       dia=1;
       mes=1;
       ano=2000;
     }
     
     void getData()
        { 
         cout<<" (dia mes ano) :";
         cin>>dia>>mes>>ano;
         if(dia>31)
           {
             cout<<"Dia invalido!";
             exit(0);
          }
      else if(mes>12)
      {
              cout<<"Mes invalido!";
              exit(0);
       }
        }
    void imprimeNome()
    {
       cin>>nome;
       cout << "\nOla: " << nome;
    }
    
    void imprimeData()
     { 
       cout<<"\nVoce tem "<<ano<<" anos "<<mes<<" meses and "<<dia<<" dias.";
     }
    Pessoa idadeCalcula(Pessoa &nascimento,Pessoa &dataAtual);  
};

     Pessoa Pessoa::idadeCalcula(Pessoa &nascimento,Pessoa &dataAtual)  
     {
      Pessoa aux;
      int mescode[12]; 
      if(nascimento.dia>dataAtual.dia)    //para Datas 
       {
           dataAtual.dia=dataAtual.dia+mescode[dataAtual.mes-2];
           aux.dia=dataAtual.dia-nascimento.dia;
           dataAtual.mes=dataAtual.mes-1;
          }
        else
             aux.dia=dataAtual.dia-nascimento.dia;
        if(nascimento.mes>dataAtual.mes)  //para mes
          {
           dataAtual.mes=dataAtual.mes+12;
           dataAtual.ano=dataAtual.ano-1;
           aux.mes=dataAtual.mes-nascimento.mes;
          }
        else
          aux.mes=dataAtual.mes-nascimento.mes;    
          
        aux.ano=dataAtual.ano-nascimento.ano;//para anos 
        return aux;
  }
  int main()
   { //dh = data hoje      
     Pessoa nascimento,dh,aux,nome,endereco;
     cout << "\nInforme o nome \n";
     nome.imprimeNome();
     cout<<"\nInforme a sua data de nascimento \n";
     nascimento.getData();
     cout<<"\nInforme a data atual \n";
     dh.getData();
     aux=nascimento.idadeCalcula(nascimento,dh);
     aux.imprimeData();
}