#include <stdio.h> 
int main (){
    float matriz[2][3];
    int lin, col;
    for (lin=0; lin<2; lin++){
        for (col=0; col<3; col++){
            scanf ("%f", &matriz[lin][col]);
        }
    }
    for (lin=0; lin<2; lin++){
        for (col=0; col<3; col++){
            if (lin==1 && col==0){// para mostrar certinho a matriz como ela foi criada
                printf ("\n%.1f | ", matriz[lin][col]);
            }
            else {
            printf ("%.1f | ", matriz[lin][col]);
            }
        }
    }
    return 0;
}

