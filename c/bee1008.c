#include <stdio.h>
 
int main() {
    int numero, horas;
    double valorhora, salario;
    scanf("%d\n%d\n%lf", &numero, &horas, &valorhora);

    salario = horas * valorhora;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}