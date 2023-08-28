#include <stdio.h>

int main() {
    double salario, percent, novoSalario, reaj;
    scanf("%lf", &salario);

    if(salario<=400)
        percent = 0.15;
    else if(salario > 400 && salario <= 800)
        percent = 0.12;
    else if(salario > 800 && salario <= 1200)
        percent = 0.1;
    else if(salario > 1200 && salario <= 2000)
        percent = 0.07;
    else if(salario > 2000)
        percent = 0.04;

    reaj = salario*percent;
    novoSalario = salario + reaj;

    printf("Novo salario: %.2lf\n", novoSalario);
    printf("Reajuste ganho: %.2lf\n", reaj);
    printf("Em percentual: %.0lf %%\n", percent*100);
    
    return 0;
}