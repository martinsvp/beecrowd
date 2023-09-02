#include <stdio.h>
#define TAM 1000

int main() {
    int t, n[TAM];
    scanf("%d", &t);

    for (int i = 0; i < TAM; i++) {
        n[i] = i % t;
    }

    for (int i = 0; i < TAM; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}