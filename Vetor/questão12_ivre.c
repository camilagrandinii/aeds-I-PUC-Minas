#include <stdio.h>
int Fatorial (int n);
int main(){
    int a[10];
    int b[10];
    for (int i=0; i<10; i++){
    printf ("Digite 10 numeros: ");
    scanf ("%i", &a[i]);
    }
    for (int i=0; i<10; i++){
      b[i]=Fatorial(a[i]);
    }
    for (int i=0; i<10; i++){
    printf ("%d | ", b[i]); 
    }
    return 0;
}

int Fatorial (int n){
int cont, fat=1;
for (cont=n; cont>1; cont--){
fat = fat*cont;
}// fim do for 
return fat;
}// fim da função