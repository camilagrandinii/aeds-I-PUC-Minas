#include <stdio.h>
int FatorialB (float a[], float b[]);
int main(){
    float a[10];
    float b[10];
    for (int i=0; i<10; i++){
    printf ("Digite 10 numeros: ");
    scanf ("%f", &a[i]);
    }

    FatorialB(a, b);
    for (int i=0; i<10; i++){
        printf ("%.2f | ", b[i]);
    }
    return 0;
}
int FatorialB (float a[], float b[]){
int cont;
float aux;
for (int i=0; i<10; i++){
aux=a[i];
for (cont=a[i]; cont>=1; cont--){
a[i]=a[i]*cont;
}// fim do for dentro fatorial

a[i]/=aux;
}// fim do for fora

for (int i=0; i<10; i++)
b[i]=a[i];
return 0;
}// fim do for
