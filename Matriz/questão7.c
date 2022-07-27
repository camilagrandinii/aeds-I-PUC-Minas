#include <stdio.h>

int main(void) {
  int precos[10], estoque[5][10], lin, col, produtos_estocados_armazens[5]={0,0,0,0,0}, produtos_estocados_juntos[10]={0,0,0,0,0,0,0,0,0,0}, maior_estoque=0, menor_estoque=10000, custo_total_armazem[5]={0,0,0,0,0};

  for (int i=0; i<10; i++){
  printf ("Digite o preco do produto %d: ", i+1);
  scanf ("%i", &precos[i]);
  }
  for (lin = 0; lin < 5; lin++)
    {
    for (col = 0; col < 10; col++)
        {
          printf ("Digite a quantidade estocada do produto %d no armazem %d: ", col+1, lin+1);
          scanf ("%i", &estoque[lin][col]);
        }
  }
  printf("\e[H\e[2J"); 

  for (lin = 0; lin < 5; lin++)
    {
    for (col = 0; col < 10; col++)
        {
          produtos_estocados_armazens[lin]+=estoque[lin][col];
          if (produtos_estocados_armazens[lin]<menor_estoque)
          menor_estoque=produtos_estocados_armazens[lin];
        }
    }
        for (int i=0; i<5; i++){
        printf ("\nItens no armazem %d: %d ", i+1, produtos_estocados_armazens[i]);
    }

    printf ("\nMenor estoque e de: %d ", menor_estoque);

      for (col = 0; col < 10; col++)
    {
    for (lin = 0; lin < 5; lin++)
        {
          produtos_estocados_juntos[col]+=estoque[lin][col];
        }
    }
    printf ("\n");
    for (int i=0; i<5; i++){
    printf ("\nProduto %d total: %d ", i+1, produtos_estocados_juntos[i]);
    }

    for (col = 0; col < 10; col++)
        {
          if (estoque[0][col]>maior_estoque){
            maior_estoque=estoque[0][col];
          }
        }
    for (col = 0; col < 10; col++)
    {
      if (estoque[lin][col]==maior_estoque){
         printf ("\nO preco do produto com o maior estoque no armazem 1 e: %d", precos[0]);
        }
    }
    for (lin = 0; lin < 5; lin++)
    {
        for (col = 0; col < 10; col++)
        {
            if (col==0)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[0];
            if (col==1)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[1];
            if (col==2)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[2];
            if (col==3)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[3];
            if (col==4)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[4];
            if (col==5)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[5];
            if (col==6)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[6];
            if (col==7)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[7];
            if (col==8)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[8];
            if (col==9)
            custo_total_armazem[lin]+=estoque[lin][col]*precos[9];
            }
          if(lin==1){
            if (col==0){
              custo_total_armazem[lin]+=estoque[lin][col]*precos[0];
            }
          }
    }
    printf ("\n");
    for (int i = 0; i < 10; i++)
    {
      printf ("\nCusto do armazem %d: %d", i+1, custo_total_armazem[i]);
    }
  return 0;
}