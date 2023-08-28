#include <stdio.h>
 
int main() {
    char nome[20];
    double salariofixo, totalvendas, salariototal;
    scanf("%s\n%lf\n%lf", nome, &salariofixo, &totalvendas);
    salariototal = salariofixo + 0.15*totalvendas;

    printf("TOTAL = R$ %.2lf\n", salariototal);
    return 0;
}