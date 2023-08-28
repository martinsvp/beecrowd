#include <stdio.h>
 
int main() {
    while(1){
        int cont=0, opc;
        double nota, soma=0, media;
        while(cont<2){
            scanf("%lf", &nota);
            if(nota<0 || nota>10){
                printf("nota invalida\n");
            } else {
                soma+=nota;
                cont++;
            }
        }
        media = soma/cont;
        printf("media = %.2lf\n", media);
        while(1){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opc);
            if(opc == 1 || opc == 2){
                break;
            }
        }
        if(opc==2){
            break;
        }
    }
    return 0;
}