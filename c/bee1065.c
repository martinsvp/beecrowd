#include <stdio.h>
 
int main() {
    int n1, n2, n3, n4, n5, tam;
    scanf("%d\n%d\n%d\n%d\n%d", &n1, &n2, &n3, &n4, &n5);
    int numeros[] = {n1, n2, n3, n4, n5};
    tam = sizeof(numeros)/sizeof(numeros[0]);

    int cont = 0;
    for(int i=0; i<tam;i++){
        if(numeros[i]%2==0){
            cont++;
        }
    }
    printf("%d valores pares\n", cont);
    return 0;
}