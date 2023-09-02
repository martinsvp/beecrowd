#include <stdio.h>
#define TAM 20

int main() {
    int vet[TAM];

    for(int i=0; i<TAM; i++) {
        scanf("%d", &vet[i]);
    }

    for(int i=0; i<TAM-1; i++) {
        for(int j=0; j<TAM-i-1; j++) {
            float aux = vet[j];
            vet[j] = vet[j+1];
            vet[j+1] = aux;
        } 
    }
    
    for(int i=0; i<TAM; i++) {
        printf("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}