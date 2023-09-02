#include <stdio.h>

double areaTriangulo(double a, double c){ 
    double area = (a*c) / 2;
    return area;
}
double areaCirculo(double c){ 
    double pi = 3.14159;
    double area = c*c*pi;
    return area;
}
double areaTrapezio(double a, double b, double c){ 
    double area = ((a+b)*c) / 2;
    return area;
}
double areaQuadrado(double b){ 
    double area = b*b;
    return area;
}
double areaRetangulo(double a, double b){ 
    double area = a*b;
    return area;
}

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", areaTriangulo(a, c));
    printf("CIRCULO: %.3lf\n", areaCirculo(c));
    printf("TRAPEZIO: %.3lf\n", areaTrapezio(a, b, c));
    printf("QUADRADO: %.3lf\n", areaQuadrado(b));
    printf("RETANGULO: %.3lf\n", areaRetangulo(a, b));
    return 0;
}