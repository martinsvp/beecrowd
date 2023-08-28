#include <stdio.h>
 
int main() {
    int n1, n2, n3, n4, n5, tam;
    scanf("%d\n%d\n%d\n%d\n%d", &n1, &n2, &n3, &n4, &n5);
    int numeros[] = {n1, n2, n3, n4, n5};
    tam = sizeof(numeros)/sizeof(numeros[0]);

    int nImpar = 0;
    int nPar = 0;
    int nPos = 0;
    int nNeg = 0;
    for(int i=0; i<tam; i++){
        if(numeros[i]%2==0){
            nPar++;
        } else{
            nImpar++;
        }
        if(numeros[i]<0){
            nNeg++;
        } else if(numeros[i]>0){
            nPos++;
        }
    }

    printf("%d valor(es) par(es)\n", nPar);
    printf("%d valor(es) impar(es)\n", nImpar);
    printf("%d valor(es) positivo(s)\n", nPos);
    printf("%d valor(es) negativo(s)\n", nNeg);
    return 0;
}