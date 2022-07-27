#include <stdio.h>
void PreencheMatriz (float num[][4]){// SEMPRE tem que passar a quantidade de colunas (mas se passar as duas n tem problema)
//O valor das colunas pode ser uma variável para a função ficar mais flexível
int lin, col;
for (lin=0; lin<3; lin++){
        for (col=0; col<4; col++){
            printf ("Digite o valor [%d][%d]: ", lin, col);
            scanf ("%f", &num[lin][col]);
        }
    }
}
void ImprimeMatriz (float num[][4]){// tem que passar a quantidade de colunas (pode ser uma variável)
    int lin, col; 
    for (lin=0; lin<3; lin++){
        for (col=0; col<4; col++){
            printf ("%.1f | ", num[lin][col]);
        }
    } 
}
int main(){
    float num [3][4];
    PreencheMatriz(num);// não precisa passar os colchetes, só o nome
    ImprimeMatriz(num);
    return 0;
}