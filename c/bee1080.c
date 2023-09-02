#include <stdio.h>
#define TAM 100
 
int main() {
    int numeros[TAM], maior, pos;
    for(int i=0; i<TAM; i++){
        scanf("%d", &numeros[i]);
    }
    for(int i=0; i<TAM; i++){
        if(i==0){
            maior = numeros[i];
            pos = i;
        } else{
            if(numeros[i]>maior){
                maior = numeros[i];
                pos = i;
            }
        }
    }
    printf("%d\n%d\n", maior, pos+1);
    return 0;
}