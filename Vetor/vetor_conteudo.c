/*Um array é um VETOR ou uma MATRIZ que permite guardar 
um certo conjunto de variáveis, todas com o mesmo tipo.*/

/* Variável capaz de armazenar mais de um valor
O índice começa em 0 e vai até o tamanho -1 do índice 

Armazena mais de um valor, mas só pode ser do mesmo tipo 

Temos que falar qual o tamanho e qual é o tipo */

/* Para trabalhar com vetor precisamos de estrutura de repetição */
#include <stdio.h>

int main(){
    float nota[5], soma=0;
    int idade [10], i;

    // Aleatório
    idade[1] = 20;

    printf ("Digite um valor: ");
    scanf ("%i", &idade[0]);

    printf ("Primeira nota: %i", idade[0]);
    printf ("\n%i\n", idade[1]);
    // Fim do aleatório

    // Entrada de dados
    for (i=0; i<5; i++){
        printf ("Digite um nota: ");
        scanf ("\n%f", &nota[i]);
        soma = soma+nota[i];
    }
    // Fim da entrada de dados

    // Saida de dados

    printf ("\nA soma das notas e: %.2f", soma);
    for (i=0; i<5; i++){
        
        printf ("\nA nota %d e %.2f", i+1, nota[i]); /* Colocando o numero da nota como o i+1, para n ficar com o 0 */
    }
    // Fim da saida de dados
    return 0;
}