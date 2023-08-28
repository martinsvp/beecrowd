#include <stdio.h>
 
int main() {
    double salario, impRenda;
    scanf("%lf", &salario);

    if(salario<=2000){
        printf("Isento\n");
    } else if(salario>2000 && salario<=3000){
        impRenda = (salario-2000)*0.08;
        printf("R$ %.2lf\n", impRenda);
    } else if(salario>3000 && salario<=4500){
        impRenda = (salario-3000)*0.18 + 1000*0.08;
        printf("R$ %.2lf\n", impRenda);
    } else if(salario > 4500){
        impRenda = (salario-4500)*0.28 + 1500*0.18 + 1000*0.08;
        printf("R$ %.2lf\n", impRenda);
    }
    return 0;
}