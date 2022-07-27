#include <stdio.h>

int main(){
    int matriz_motores[12][2], matriz_custo_e_lucro[12][2], lin, col, custo_e_lucro_motor1[12][2], custo_e_lucro_motor2[12][2], lucro_anual;
    
    for (col=0; col<2; col++){
        for (lin=0; lin<12; lin++){
            printf ("Digite o numero de motores %d produzidos no mes %d: ", col+1, lin+1);
            scanf ("%d", &matriz_motores[lin][col]);
        }
    }
    printf ("\n");
        for (lin=0; lin<2; lin++){
            printf ("Digite o custo do motor %d: ", lin+1);
            scanf ("%d", &matriz_custo_e_lucro[lin][0]);
        }
        printf ("\n");
        for (lin=0; lin<2; lin++){
            printf ("Digite o lucro do motor %d: ", lin+1);
            scanf ("%d", &matriz_custo_e_lucro[lin][1]);
        }

    FILE * controle = fopen ("Controle.txt", "w");
     for (int i=0; i<12; i++){
     fprintf(controle,"\nmes (%d) ", (i+1) );
     fprintf(controle,"\ncusto motor 1: %d ", (matriz_motores[i][0]*matriz_custo_e_lucro[0][0]) );
     fprintf(controle,"\nlucro motor 1: %d ", (matriz_motores[i][0]*matriz_custo_e_lucro[0][1]) );
     fprintf(controle,"\ncusto motor 2: %d ", (matriz_motores[i][1]*matriz_custo_e_lucro[1][0]) );
     fprintf(controle,"\nlucro motor 2: %d \n ", (matriz_motores[i][1]*matriz_custo_e_lucro[1][1]) );
    
    lucro_anual += ((matriz_motores[i][0]*matriz_custo_e_lucro[0][1]) + (matriz_motores[i][1]*matriz_custo_e_lucro[1][1]));
    } 
 
 printf ( "\nLucro anual total: %d", lucro_anual);
 
 fclose (controle);
 return 0;
}