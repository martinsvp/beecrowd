#include <stdio.h>
#define TAM 100

int main() {
    double x, n[TAM]; 
    scanf("%lf", &x);
    
    n[0] = x;
    for(int i=1; i<TAM; i++) {
        n[i] = n[i-1] / 2.0;
    }

    for(int i=0; i<TAM; i++) {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}