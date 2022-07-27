#include <stdio.h>

int main()
{
FILE *p;
char cadeia [50];
int linhas=0;
p = fopen("aluno1.txt", "r");

if (p==NULL)
printf ("\nErro na abertura");
else {
    while (!feof(p)){
        fscanf(p, "%[^\n] ", cadeia);

        if (ferror(p))
        printf ("\nErro na leitura da cadeia");
        else if (cadeia!="\n" && cadeia!=EOF) {
            printf ("%s\n", cadeia);
            linhas++;
        }
    }
    printf ("\nEsse arquivo possui %i linha(s)", linhas);
}
fclose(p);
return 0;
}
