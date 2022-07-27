#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SubstituiPorNumero(char frase[], int tam);
int main(){
 char frase[45];
 int tam;
 printf ("Digite uma frase: ");
 gets (frase);
 tam = strlen (frase);
 SubstituiPorNumero(frase, tam);
 return 0;
}
void SubstituiPorNumero(char frase[], int tam){
int i, j;
char saida[tam];
i=0;
j=0;
do {
        while(frase[i]!='0' && frase[i]!='1'&&frase[i]!='2'&&frase[i]!='3'&&frase[i]!='4' &&frase[i]!='5'&&frase[i]!='6'&&frase[i]!='7'&&frase[i]!='8'&&frase[i]!='9'){
            saida[j]=frase[i];
            j++;
            i++;
        }
        saida[j]='\0';
        if (frase[i]=='0'){
        strcat(saida,"zero");
        }
        else if (frase[i]=='1'){
        strcat(saida,"um");
        }
        else if (frase[i]=='2'){
        strcat(saida,"dois");
        }
        else if (frase[i]=='3'){
        strcat(saida,"três");
        }
        else if (frase[i]=='4'){
        strcat(saida,"quatro");;
        }
        else if (frase[i]=='5'){
        strcat(saida,"cinco");
        }
        else if (frase[i]=='6'){
        strcat(saida,"seis");
        }
        else if (frase[i]=='7'){
        strcat(saida,"sete");
        }
        else if (frase[i]=='8'){
        strcat(saida,"oito");
        }
        else if (frase[i]=='9'){
        strcat(saida,"nove");
        }
    } while (frase[i]!='\0');
 printf ("%s", saida);
}