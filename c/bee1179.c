#include <stdio.h>
#define TAM_VET 5
#define MAX 15 

int main() {
    int par[TAM_VET], imp[TAM_VET];
    int countPar=0, countImp=0;

    for(int i=0; i<MAX; i++) {
        int valor;
        scanf("%d", &valor);
        
        if(valor % 2 != 0) {
            imp[countImp] = valor;
            countImp++;
        } else {
            par[countPar] = valor;
            countPar++;
        }
        
        if(countPar >= TAM_VET) {
            for(int i=0; i<countPar; i++) {
                printf("par[%d] = %d\n", i, par[i]);
            }
            countPar = 0;
        } else if (countImp >= TAM_VET) {
            for(int i=0; i<countImp; i++) {
                printf("impar[%d] = %d\n", i, imp[i]);
            }
            countImp = 0;
        }
    }

    for(int i=0; i<countImp; i++) {
        printf("impar[%d] = %d\n", i, imp[i]);
    }
    
    for(int i=0; i<countPar; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    
    return 0;
}