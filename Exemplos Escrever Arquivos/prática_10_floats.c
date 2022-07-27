/* Leitura de 10 floats
Escrever em um arquivo
Ler no arquivo e printar na tela */

#include <stdio.h>

int main(){
    float n1=3.1415, n2=5.43847, n3=8.2389, n4=9.4982, n5=310.239, n6=312.3928, n7=23.234, n8=39.432, n9=4328.43, n10=3.292;
    FILE *arq = fopen("pratica.txt", "wb");
    fwrite(&n1, sizeof(float), 1, arq);
    fwrite(&n2, sizeof(float), 1, arq);
    fwrite(&n3, sizeof(float), 1, arq);
    fwrite(&n4, sizeof(float), 1, arq);
    fwrite(&n5, sizeof(float), 1, arq);
    fwrite(&n6, sizeof(float), 1, arq);
    fwrite(&n7, sizeof(float), 1, arq);
    fwrite(&n8, sizeof(float), 1, arq);
    fwrite(&n9, sizeof(float), 1, arq);
    fwrite(&n10, sizeof(float), 1, arq);
    fclose (arq);

#define TAM 10
    float valores;
    arq = fopen("pratica.txt", "rb");
    for (int i=0; i < TAM; i++){
        fread (&valores, sizeof(float), 1, arq); /* Ele lê bytes */
        printf ("%.2f\n", valores);
    }
    fclose(arq);

    return 0;
}