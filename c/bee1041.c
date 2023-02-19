#include <stdio.h>
#define TAM 3

void insertionSort(int numeros[TAM]){
    int i, j, aux;
    for(i=1;i<TAM;i++){
        aux = numeros[i];
        j = i-1;

        while(j>=0 && numeros[j]>aux){
            numeros[j+1] = numeros[j];
            j -= 1;
        }
        numeros[j+1] = aux;
    }
}

void mostraNumeros(int numeros[TAM]){
    for(int i = 0;i<TAM;i++){
        printf("%d\n", numeros[i]);
    }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int numeros[TAM] = {a, b, c};

    insertionSort(numeros);
    mostraNumeros(numeros);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}