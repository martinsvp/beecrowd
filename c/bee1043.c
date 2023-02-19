#include <stdio.h>
#include <stdlib.h>
 
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if((abs(b-c) < a && a < (b+c)) && (abs(a-c) < b && b < (a+c)) && (abs(a-b) < c && c < (a+b))){
        double perimetro = a + b + c;
        printf("Perimetro = %.1lf\n", perimetro);
    } else{
        double area = ((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }
    return 0;
}
