#include <stdio.h>
    int main()
{
    float aluguel = 0, faturamento_anual = 0, faturamento_mensal = 0, qtde_veiculos = 0, multas_mes = 0, manutencao = 0;

    printf("Digite a quantidade de veiculos: ");
    scanf("%f", &qtde_veiculos);
    printf("Quanto e o aluguel? ");
    scanf("%f", &aluguel);

    faturamento_mensal = (qtde_veiculos / 3) * aluguel;
    faturamento_anual = faturamento_mensal * 12;
    printf("O faturamento anual e de: %.2f", faturamento_anual);

    multas_mes = (qtde_veiculos / 10) * (0.2 * aluguel);
    printf("\nMultas no mes: %.2f reais", multas_mes);

    manutencao = (qtde_veiculos * 0.02) * 600;
    printf("\nManutencao: %.2f reais", manutencao);

    FILE *arq;
    arq = fopen("resultado.txt", "w");

    fprintf (arq, "Faturamento: %.2f", faturamento_anual);
    fputs("\n", arq);
    fprintf (arq, "Multas: %.2f", multas_mes);
    fputs("\n", arq);
    fprintf (arq, "Manutencao: %.2f", manutencao);

    fclose(arq);

    return 0;
}
