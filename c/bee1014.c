#include <stdio.h>
 
int main() {
    int distancia;
    double litros, consumo;
    scanf("%d", &distancia);
    scanf("%lf", &litros);

    consumo = distancia/litros;
    printf("%.3lf km/l\n", consumo);
    return 0;
}