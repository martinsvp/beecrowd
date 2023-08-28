#include <stdio.h>
 
int main() {
    int codigo1, qntd1, codigo2, qntd2;
    double valor1, valor2, total;
    scanf("%d %d %lf", &codigo1, &qntd1, &valor1);
    scanf("%d %d %lf", &codigo2, &qntd2, &valor2);
    total = (qntd1*valor1) + (qntd2*valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}