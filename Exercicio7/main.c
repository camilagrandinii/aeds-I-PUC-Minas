#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct Empregado{
    int matricula;
    char nome[100];
    float salario;
 }Empregado;

int numeroEmpregados = 0;
void lerEmpregadosArquivo(Empregado VetorEmpregados[]);
void ListaCompleta(Empregado VetorEmpregados[]);
void strSplit(char *strTOsplit,char *strArr[], char *strSeparet,int nArr);
float MediaSalarial (Empregado VetorEmpregados[]);
int AcimadaMedia (Empregado VetorEmpregados[], int media_salarial);
void TestaNome (Empregado VetorEmpregados[]);
void MenorSalario (Empregado VetorEmpregados[]);
float MaiorSalario (Empregado VetorEmpregados[]);

int main()
{
    float media_salarial;
    Empregado VetorEmpregados[1000];
    lerEmpregadosArquivo(VetorEmpregados);
    ListaCompleta(VetorEmpregados);
    media_salarial=MediaSalarial(VetorEmpregados);
    printf ("\n\nA media salarial e de: %.f", media_salarial);
    printf ("\nFuncionarios com salario acima da media: %i", AcimadaMedia(VetorEmpregados, media_salarial));
    TestaNome(VetorEmpregados);
    MenorSalario(VetorEmpregados);
    printf ("\nO maior salario e de: %.2f", MaiorSalario(VetorEmpregados));
    printf("\n\nFim do programa!\n");
    return 0;
}
void strSplit(char *strTOsplit,char *strArr[], char *strSeparet,int nArr)
        {
            int i = 0;
            char * pch;

            pch = strtok (strTOsplit,strSeparet);
            for(i = 0;i < nArr;i++)
            {
                //printf ("%s\n",pch);

                strArr[i] = pch;
                pch = strtok (NULL,strSeparet);
            }
        }
void  lerEmpregadosArquivo(Empregado VetorEmpregados[])
        {

            FILE *arquivo;
            arquivo = fopen("empregados.txt", "r");
            char linha[100];
            char *result;
            char * informacoes_linha[3]; // ponteiro criado por uma necessidade da str split
            int i=0;
            while (!feof(arquivo))  // Enquando não chegar no fim do arquivo..
            {
                result = fgets (linha, 100, arquivo);//Leitura de uma linha do arquivo...
                strSplit(linha, informacoes_linha, ";",3); //Separa os campos e os armazena no vetor de 3 posições chamado informacoes_linha
                //Cada posiçãoo do vetor VetorEmpregados guarda não so uma mas tres informações.
                 VetorEmpregados[i].matricula = atoi(informacoes_linha[0]);
                strcpy(VetorEmpregados[i].nome, (const char*)(informacoes_linha[1]) );
                VetorEmpregados[i].salario = atof(informacoes_linha[2]);
                i++;
            }
            numeroEmpregados = i;
        }


 void ListaCompleta(Empregado VetorEmpregados[])
        {
	   int i;
            for (i = 0; i < numeroEmpregados; i++)
            {
                printf(" %s : %d : %.2f \n", VetorEmpregados[i].nome, VetorEmpregados[i].matricula,VetorEmpregados[i].salario);
            }
        }
float MediaSalarial (Empregado VetorEmpregados[]){
float media_salarial=0, soma_salarios=0, num_empregados=numeroEmpregados;
int i;
    for (i=0; i<numeroEmpregados; i++){
        soma_salarios+=VetorEmpregados[i].salario;
    }
    media_salarial=soma_salarios/num_empregados;

    printf ("\n\nEmpregados abaixo da media salaral: ");

    for (int a=0; a<numeroEmpregados; a++){
    if (VetorEmpregados[a].salario<media_salarial){
    printf ("%s\n", VetorEmpregados[a].nome);
    }
    }
    return media_salarial;
}
int AcimadaMedia (Empregado VetorEmpregados[], int media_salarial){
int acima_da_media=0;
for (int i=0; i<numeroEmpregados; i++){
        if (VetorEmpregados[i].salario>media_salarial){
            acima_da_media++;
        }
    }
    return acima_da_media;
}
void TestaNome (Empregado VetorEmpregados[]){
    char nome[30];
    int dif=0;
    printf ("\n\nDigite um nome: ");
    gets (nome);
    for (int i=0; i<numeroEmpregados; i++){
        if (VetorEmpregados[i].nome==nome){
            printf ("\nExiste um empregado com esse nome!");
        }
        if (VetorEmpregados[i].nome!=nome){
            dif++;
        }
    }
    if (dif==1)
    printf ("\nNão existe um empregado com esse nome");
}
void MenorSalario (Empregado VetorEmpregados[]){
int menor_salario=10080;
for (int i=0; i<numeroEmpregados; i++){
        if (VetorEmpregados[i].salario<menor_salario){
            menor_salario=VetorEmpregados[i].salario;
        }
    }
for (int i=0; i<numeroEmpregados; i++){
        if (VetorEmpregados[i].salario==menor_salario){
           printf ("\nO empregado %s de matricula %i possui o menor salario", VetorEmpregados[i].nome, VetorEmpregados[i].matricula);
        }
    }
}
float MaiorSalario (Empregado VetorEmpregados[]){
int maior_salario=0;
for (int i=0; i<numeroEmpregados; i++){
        if (VetorEmpregados[i].salario>maior_salario){
            maior_salario=VetorEmpregados[i].salario;
        }
    }
return maior_salario;
}
