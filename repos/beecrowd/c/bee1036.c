#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = (b*b) - 4 * a *c;

    if(delta < 0 || a == 0){
        printf("Impossivel calcular\n");
    } else{
        double r1 = (-b + sqrt(delta))/(2*a);
        double r2 = (-b - sqrt(delta))/(2*a);

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    return 0;
}