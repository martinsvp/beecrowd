#include <stdio.h>
#define TAM 100

int main() {
    float vet[TAM];
    for(int i=0; i<TAM; i++) {
        scanf("%f", &vet[i]);
    }

    for(int i=0; i<TAM; i++) {
        if(vet[i] <= 10) {
            printf("A[%d] = %.1f\n", i, vet[i]);
        }
    }

    return 0;
}