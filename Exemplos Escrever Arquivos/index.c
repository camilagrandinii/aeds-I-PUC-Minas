#include <stdio.h>

int main (){
    float pi = 3.141592; /* Consome 8 bytes, o ponto também conta */
    printf ("%ld\n", sizeof(pi));

    FILE *fp = fopen("teste.txt", "w");
    fprintf (fp, "%f", pi);
    fprintf (fp, "\n%f", pi); /* O \n gasta 1 byte também */
    fclose(fp);
    return 0;
}