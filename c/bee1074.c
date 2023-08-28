#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int numeros[n];

    for(int i=0; i<n; i++){
        scanf("%d", &numeros[i]);
    }
    for(int i=0; i<n; i++){
        if(numeros[i]==0){
            printf("NULL\n");
        } else{
            if(numeros[i]%2==0){
                printf("EVEN ");
            } else{
                printf("ODD ");
            }
            if(numeros[i]>0){
                printf("POSITIVE\n");
            } else{
                printf("NEGATIVE\n");
            }
        }
    }
    return 0;
}