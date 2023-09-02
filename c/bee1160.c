#include <stdio.h>

void tempoCresc(int *a) {
    int pa, pb;
    float ga, gb;
    scanf("%d %d %f %f", &pa, &pb, &ga, &gb);

    *a = 0;
    do{
        pa = pa + pa*(ga/100);
        pb = pb + pb*(gb/100);
        (*a)++;
        if(*a>100) {
            printf("Mais de 1 seculo.\n");
            break;
        }
    } while(pa <= pb);
}


int main() {
    int t, anos;
    
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        tempoCresc(&anos);
        
        if(anos<=100) {
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}