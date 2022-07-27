#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5 /* Todo lugar que tem TAM ele coloca 5 */

int main (){
    float valores;
    FILE *fp = fopen("teste.txt", "wb");
    for (int i=0; i<TAM; i++){
        scanf ("%f", &valores);
        fwrite (&valores, sizeof(float), 1, fp);
    }
    fclose(fp);

    printf ("\n");
    fp = fopen("teste.txt", "rb");

    for (int i=0; i < TAM; i++){
        fread (&valores, sizeof(float), 1, fp); /* Ele lê bytes */
        printf ("%.2f\n", valores);
    }
    fclose(fp);
    return 0;
}