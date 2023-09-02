#include <stdio.h>
#include <string.h>

typedef struct pessoa {
    char nome[100];
    char escolha[6];
    int chute;
} Pessoa;

int main() {
    int nTestes;
    scanf("%d", &nTestes);
    Pessoa p1[nTestes], p2[nTestes];

    for(int i=0; i<nTestes; i++) {
        scanf("%99s %5s %99s %5s", p1[i].nome, p1[i].escolha, p2[i].nome, p2[i].escolha);
        scanf("%d %d", &p1[i].chute, &p2[i].chute);

        if((p1[i].chute + p2[i].chute) % 2 == 0) {
            if(strcmp(p1[i].escolha, "PAR") == 0) {
                printf("%s\n", p1[i].nome);
            } else {
                printf("%s\n", p2[i].nome);
            }
        } else {
            if(strcmp(p1[i].escolha, "IMPAR") == 0) {
                printf("%s\n", p1[i].nome);
            } else {
                printf("%s\n", p2[i].nome);
            }
        }
    }

    return 0;
}