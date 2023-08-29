#include <stdio.h>

#define TAM 10
int main() {
    int vet[TAM];
    int v;

    scanf("%d", &v);
    for(int i=0; i<TAM; i++) {
        vet[i] = v;
        printf("N[%d] = %d\n", i, vet[i]);
        v*=2;
    }

    return 0;
}