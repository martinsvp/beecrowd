#include <stdio.h>
#include <math.h>
 
int main() {
    double raio, pi, area;
    pi = 3.14159;
    scanf("%lf", &raio);
    area = pow(raio, 2) * pi;

    printf("A=%.4lf", area);
    return 0;
}