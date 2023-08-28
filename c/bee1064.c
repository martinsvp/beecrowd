#include <stdio.h>
 
int main() {
    double v1, v2, v3, v4, v5, v6, media;
    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &v1, &v2, &v3, &v4, &v5, &v6);
    double valores[6] = {v1, v2, v3, v4, v5, v6};
    
    int cont = 0;
    double soma = 0;
    for(int i=0; i<6;i++){
        if(valores[i]>0){
            cont++;
            soma += valores[i];
        }
    }
    media = soma/cont;

    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", media);


    return 0;
}