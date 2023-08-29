#include <stdio.h>
#define TAM 12 

int main() {
    float soma=0.0, media=0.0, matriz[TAM][TAM];
    int linha;
    char op;

    scanf("%d", &linha);
    scanf(" %c ", &op);

    for(int i=0; i<TAM; i++) {
        for(int j=0; j<TAM; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    if(op == 'S') {
        for(int i=0; i<TAM; i++) {
            soma += matriz[linha][i];
        }
        
        printf("%.1f", soma);
    }

    if(op == 'M') {
        for(int i=0; i<TAM; i++) {
            media += matriz[linha][i];
        }
        media /= (float)TAM;

        printf("%.1f\n", media);
    }

    return 0;
}