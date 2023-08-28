#include <stdio.h>
 
int main() {
    int horas, velocidade, km;
    float litros;
    scanf("%d\n%d", &horas, &velocidade);

    km = velocidade*horas;
    litros = km/12.0;

    printf("%.3f\n", litros);
    return 0;
}