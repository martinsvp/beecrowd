#include <stdio.h>

int main() {
    int inicio, final, tempo;
    scanf("%d %d", &inicio, &final);

    tempo = final - inicio;
    if(tempo <= 0)
        tempo += 24;

    printf("O JOGO DUROU %d HORA(S)\n", tempo);

    return 0;
}