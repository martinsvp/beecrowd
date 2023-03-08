#include <stdio.h>
 
int main() {
    int golsI, winI=0, golsG, winG=0, draw=0, opc, totalJogos=0;

    while (1) {
        totalJogos++;
        scanf("%d %d", &golsI, &golsG);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opc);
        if (golsI > golsG) {
            winI++;
        } else if (golsI < golsG) {
            winG++;
        } else {
            draw++;
        }
        if (opc == 2) {
            break;
        }
    }

    printf("%d grenais\n", totalJogos);
    printf("Inter:%d\n", winI);
    printf("Gremio:%d\n", winG);
    printf("Empates:%d\n", draw);
    if (golsI > golsG) {
        printf("Inter venceu mais\n");
    } else if (golsI < golsG) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}