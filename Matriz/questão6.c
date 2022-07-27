#include <stdio.h>

int main()
{
    int lin, col, matriz[5][3], itens[4], custo_total_produto[3],custo_total_armazem[4], maior_estoque_prod2=0, menor_estoque=100000;

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("Digite o estoque atual do produto %d no armazem %d: ", col + 1, lin + 1);
            scanf("%d", &matriz[lin][col]);
        }
    }

    for (col = 0; col < 3; col++)
    {
        printf("Digite o preco atual do produto %d: ", col + 1);
        scanf("%i", &matriz[4][col]);
    }

    printf("\e[H\e[2J"); // serve para limpar a tela

    for (lin = 0; lin < 4; lin++)
    {
        for (col = 0; col < 3; col++)
        {
          itens[lin]+=matriz[lin][col];
          if(lin==0 && col==0)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][0];
          if(lin==0 && col==1)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][1];
          if(lin==0 && col==2)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][2];
          
          if(lin==1 && col==0)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][0];
          if(lin==1 && col==1)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][1];
          if(lin==1 && col==2)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][2];
          
          if(lin==2 && col==0)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][0];
          if(lin==2 && col==1)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][1];
          if(lin==2 && col==2)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][2];
          
          if(lin==3 && col==0)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][0];
          if(lin==3 && col==1)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][1];
          if(lin==3 && col==2)
          custo_total_armazem[lin]+=matriz[lin][col]*matriz[4][2];
        }
    }
    for (int i=0; i<4; i++){
        printf ("\nItens no armazem %d: %d ", i+1, itens[i]);
    }
    for (lin = 0; lin < 4; lin++)
    {
      if (matriz[lin][1]>maior_estoque_prod2)
      maior_estoque_prod2=matriz[lin][1];
      if (itens[lin]<menor_estoque)
      menor_estoque=itens[lin];
    }
    for (lin = 0; lin < 4; lin++)
    {
      if (matriz[lin][1]==maior_estoque_prod2)
      printf("\nO armazem com o maior estoque do produto 2 e o %d", lin+1);
      if(itens[lin]==menor_estoque)
      printf("\nO armazem com o menor estoque e o %d\n", lin+1);
    }
    for (col = 0; col < 3; col++)
    {
        for (lin = 0; lin < 4; lin++)
        {
          if(col==0)
          custo_total_produto[col]+=matriz[lin][col]*matriz[4][0];
          if(col==1)
          custo_total_produto[col]+=matriz[lin][col]*matriz[4][1];
          if(col==2)
          custo_total_produto[col]+=matriz[lin][col]*matriz[4][2];
        }
    }
       for (int i=0; i<4; i++){
        printf ("\nCusto total do produto %d: %d ", i+1, custo_total_produto[i]);
    }
    printf ("\n");
        for (int i=0; i<4; i++){
        printf ("\nCusto total do armazem %d: %d ", i+1, custo_total_armazem[i]);
    }
    return 0;
}
