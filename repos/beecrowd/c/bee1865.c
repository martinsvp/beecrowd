#include <stdio.h>
#include <string.h>

typedef struct amigo{
    char nome[20];
    int forca;
} Amigo;


int main() {
    char digno[5] = "Thor";
    int casos;
    scanf("%d", &casos);
    Amigo amigos[casos];

    for(int i=0; i<casos; i++) {
        scanf("%19s %d", amigos[i].nome, &amigos[i].forca);
    }

    for(int i=0; i<casos; i++) {
        if(strcmp(amigos[i].nome, digno) == 0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}