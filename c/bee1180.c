#include <stdio.h>
 
int main() {
    int n, menor, posMenor;
    scanf("%d", &n);

    int x[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &x[i]);
    }

    for(int i=0; i<n; i++) {
        if(i == 0) {
            menor = x[i];
            posMenor = i;
        } else {
            if (x[i] < menor) {
                menor = x[i];
                posMenor = i;
            }
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posMenor);

    return 0;
}