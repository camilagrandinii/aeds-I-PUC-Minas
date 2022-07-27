#include <stdio.h>

int main()
{
    int matriz[4][5], lin, col, col_1, col_2, col_3, col_4, vet_soma[5]={0,0,0,0,0}, i = 10;
    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            printf("Digite o numero linha %d coluna %d da matriz: ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }
    system ("cls || clear");
    for (col = 0; col < 5; col++)
    {
        for (lin = 0; lin < 4; lin++)
        {
            if (col == 0)
                vet_soma[col] += matriz[lin][col];
            else if (col == 1)
                vet_soma[col] += matriz[lin][col];
            else if (col == 2)
                vet_soma[col] += matriz[lin][col];
            else if (col == 3)
                vet_soma[col] += matriz[lin][col];
        }
    }

    for (int cont=0; cont<4; cont++){
    printf ("\nSoma da coluna %d na matriz: %d", cont, vet_soma[cont]);
    }

    printf("\n\nNumeros maiores que dez: ");
    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 5; col++)
        {
            if (matriz[lin][col] > 10)
                printf(" %d - ", matriz[lin][col]);
            i = matriz[lin][col];
        }
    }
    if (i <=10)
    printf("nenhum");
    
    printf("\nMatriz: ");
    for (lin = 0; lin < 4; lin++)
    {
      printf ("\n");
        for (col = 0; col < 5; col++)
        {
        printf("%d\t", matriz[lin][col]);
        }
    }

    return 0;
}