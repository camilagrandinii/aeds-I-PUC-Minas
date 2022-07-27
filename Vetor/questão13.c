#include <stdio.h>
int a_e_b (int a[], int b[], int i);
int main(){
    int a[10], b[10], vetC[20], i;

    for (i=0; i<10; i++){
    printf ("Digite valores para o vetor A: ");
    scanf ("%i", &a[i]);
    }
    for (i=0; i<10; i++){
    printf ("Digite valores para o vetor B: ");
    scanf ("%i", &b[i]);
    }

    for (int i=0; i<20; i++)
    vetC[i]=a_e_b(a, b, i);

    printf ("\nValores do vetor C: ");
    for (i=0; i<20; i++){
        printf ("%d | ", vetC[i]);
    }
    return 0;
}
int a_e_b (int a[], int b[], int i){
  int vetC[30];
    for (int i=0; i<20;i++){
        if (i<10){
            vetC[i]=a[i];
        }
        else {
            vetC[i]=b[i-10];
        }
    }// fim do for
    int aux;
    for (int a=0; a<19; a++){
      for (int b=a+1; b<20; b++){
            if (vetC[a]<vetC[b]){
                aux = vetC[a];
                vetC[a]=vetC[b];
                vetC[b]=aux;
            }
      }// fim do for
    }// fim do for de fora
    return vetC[i];
}// fim da função