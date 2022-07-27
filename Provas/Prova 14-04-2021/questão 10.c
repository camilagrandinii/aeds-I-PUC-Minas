#include <stdio.h>

int main(void) {
  int opcao, idade, voto_fem1=0, voto_masc1=0, voto_fem2=0, voto_masc2=0, voto_fem3=0, voto_masc3=0, total_1=0, total_entre1828=0;
  char sexo;
  float idade_thevoice=0, media_thevoice=0, porcen_1828=0;

  while (opcao!=4) {
    
    printf("\n\nMenu de opções:\n1 - Domingão do Faustão\n2 - Luciano Hulk\n3 - The Voice Brasil\n4 - Sair\n");
    scanf ("%i", &opcao);

  switch (opcao){
    case 1: 
    printf ("Qual a sua idade? ");
    scanf ("%i", &idade);

    if (idade<0 || idade>150){
    printf ("Idade inválida!");
    }
    else if (idade>=18 && idade<=28) {
    total_entre1828++;
    }
    else {
    }

    printf ("Qual o seu sexo (f) ou (m)? ");
    scanf (" %c", &sexo);

    if (sexo!='f' && sexo!='m'){
    printf ("Sexo inválido!");
    }
    else if (sexo=='f'){
    voto_fem1++;
    }
    else if (sexo=='m'){
    voto_masc1++;
    }

    total_1++;

    break;

    case 2:
    printf ("Qual a sua idade? ");
    scanf ("%i", &idade);

    if (idade<0 || idade>150){
    printf ("Idade inválida!");
    }
    else {
    
    }

    printf ("Qual o seu sexo (f) ou (m)? ");
    scanf (" %c", &sexo);

    if (sexo!='f' && sexo!='m'){
    printf ("Sexo inválido!");
    }
    else if (sexo=='f'){
    voto_fem2++;
    }
    else if (sexo=='m'){
    voto_masc2++;
    }

    break;

    case 3:
    printf ("Qual a sua idade? ");
    scanf ("%i", &idade);

    if (idade<0 || idade>150){
    printf ("Idade inválida!");
    }
    else {
    idade_thevoice+=idade;
    }

    printf ("Qual o seu sexo (f) ou (m)? ");
    scanf (" %c", &sexo);

    if (sexo!='f' && sexo!='m'){
    printf ("Sexo inválido!");
    }
    else if (sexo=='f'){
    voto_fem3++;
    }
    else if (sexo=='m'){
    voto_masc3++;
    }

    break;

    case 4:
    printf ("Saindo do programa...");
    break;

    default:
    printf ("Opção inválida!");
    break;
  }

  }// fim while

  media_thevoice = idade_thevoice/voto_masc3;

  if (voto_fem1>voto_fem2 && voto_fem1>voto_fem3){
  printf ("\nPrograma de TV com mais votos femininos: Domingão do Faustão");
  }
  else if (voto_fem2>voto_fem1 && voto_fem2>voto_fem3){
  printf ("\nPrograma de TV com mais votos femininos: Luciano Hulk");
  }
  else if (voto_fem3>voto_fem1 && voto_fem3>voto_fem2){
  printf ("\nPrograma de TV com mais votos femininos: The Voice Brasil");
  }

  if (voto_masc3>0){
   printf ("\nMédia das idades dos telespectadores homens de The Voice Brasil: %.2f", media_thevoice);
  }
  else {
  media_thevoice = 0; 
  printf ("\nA média das idades dos telespectadores homens do The Voice Brasil: %.2f", media_thevoice);
  }
  if (total_1>0){
  porcen_1828 = (total_entre1828*100)/total_1;
  printf ("\nPorcentagem de telespectadores do Domingão do Faustão com idade entre 18 e 28 (em relação a todos os telespectadores do programa): %.2f", porcen_1828);
  }

  else {
  printf ("\nPorcentagem de telespectadores do Domingão do Faustão com idade entre 18 e 28 (em relação a todos os telespectadores do programa): 0");
  }

  return 0;
}