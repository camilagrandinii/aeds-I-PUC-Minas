#include <stdio.h>

int main (){
    float pi = 3.141592; /* Consome 8 bytes, o ponto também conta */
    printf ("%ld\n", sizeof(pi));

    FILE *fp = fopen("teste.txt", "wb"); /* Write in binary */
    fwrite(&pi, sizeof(float), 1, fp); /* Salvando no arquivo como bite (em binário) 
    Ele grava um float em um endereço de memória, em Fp */
    fclose(fp);

    /* Em arquivo binário, qualquer float ocupa 4 bytes */

    float teste;
    fp = fopen("teste.txt", "rb"); /* Read in binary */
    fread (&teste, sizeof(float), 1 , fp);
    fclose(fp);

    printf ("O valor lido e: %f\n", teste);
    return 0;
}
