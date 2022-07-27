#include <stdio.h>
#include <string.h>

int main(void) {
  int cabelereiro [5][3], lin, col, pagamento_manicures[5][3], soma_pagamento[6]={0,0,0,0,0};
  char manicures[5][34];

    for (lin=0; lin<5; lin++){
    printf ("Digite o nome da manicure %d: ", lin+1); 
    scanf ("%s", &manicures[lin]);
    }

  for (col=0; col<3; col++){
    for (lin=0; lin<5; lin++){
      if (col==0){
      printf ("Digite quantos serviços de pé foram realizados pela manicure %d: ", lin+1);
      scanf ("%d", &cabelereiro[lin][col]);
      }
      else if (col==1){
      printf ("Digite quantos serviços de mão foram realizados pela manicure %d: ", lin+1);
      scanf ("%d", &cabelereiro[lin][col]);
      }
      else{
      printf ("Digite quantos serviços de podologia foram realizados pela manicure %d: ", lin+1);
      scanf ("%d", &cabelereiro[lin][col]);
      }
    }
  }
  printf("\e[H\e[2J"); 
    for (lin=0; lin<5; lin++){
    for (col=0; col<3; col++){
      if (col==0)
      pagamento_manicures[lin][col]=cabelereiro[lin][col]*15;
      else if (col==1)
      pagamento_manicures[lin][col]=cabelereiro[lin][col]*20;
      else
      pagamento_manicures[lin][col]=cabelereiro[lin][col]*30;
    }
    }
    for (lin=0; lin<5; lin++){
    for (col=0; col<3; col++){
     soma_pagamento[lin]+=pagamento_manicures[lin][col];
    }
    }
    for (lin=0; lin<5; lin++){
      printf ("\n");
    for (col=0; col<3; col++){
      printf ("%d\t", pagamento_manicures[lin][col]);
    }
    }
    printf ("\n\n");
    for (lin=0; lin<5; lin++){
      printf ("%d\t", soma_pagamento[lin]);
    }

    FILE *arq = fopen("Faturamento.txt", "w");
    if (arq == NULL)
    {
    printf("ERRO NA ABERTURA!\n");
    }
    else
    {
     printf("\nO arquivo foi aberto com sucesso!");
    }
    for (lin=0; lin<5; lin++){
        fprintf(arq, "\n%s R$%d", manicures[lin], soma_pagamento[lin]);
    }
    fclose (arq);
  return 0;
}