#include <stdio.h>

int main()
{
    char texto[50], linha[100];
    int cont_ai=0;
    char cont_a;
    FILE *arq;
    FILE *arq2;
    arq = fopen("texto.txt", "w");
    printf ("Digite um texto: ");
    scanf("%s", texto);   
    fputs(texto, arq);
    fclose(arq);
    printf("\nArquivo criado");
    arq2 = fopen ("texto.txt", "r");

    while (!feof(arq2)){
    fscanf(arq2, "%c", &cont_a);
    if (cont_a=='a' || cont_a=='A'){
        printf ("%c", cont_a);
        cont_ai++;
        }
    cont_a='k';
    }
    fclose(arq2);
    printf ("\n%i a's no documento", cont_ai);
    return 0;
}

