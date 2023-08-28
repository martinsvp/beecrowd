#include <stdio.h>
 
int main() {
    while(1){
        int m, n, soma=0;
        scanf("%d %d", &m, &n);

        if(m==0 || m<0 || n==0 || n<0){
            break;
        }
        if(m<n){
            for(int i=m; i<=n; i++){
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
        } else if(m>n){
            for(int i=n; i<=m; i++){
                printf("%d ", i);
                soma += i;
            }
            printf("Sum=%d\n", soma);
        }
    }
    
    return 0;
}