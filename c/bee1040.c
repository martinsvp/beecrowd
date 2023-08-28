#include <stdio.h>

double calculaMedia(double n1, double n2, double n3, double n4){
    return ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
}

int main() {
    double n1, n2, n3, n4, nExame, media, novaMedia;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = calculaMedia(n1, n2, n3, n4);
    printf("Media: %.1lf\n", media);
    
    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    } else if(media < 7 && media >= 5.0){
        printf("Aluno em exame.\n");
        scanf("%lf", &nExame);
        printf("Nota do exame: %.1lf\n", nExame);
        novaMedia = (nExame + media)/2;
        
        if(novaMedia >= 5.0){
            printf("Aluno aprovado.\n");
        } else{
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1lf\n", novaMedia);
    } else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}