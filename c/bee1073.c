#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int q;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            q=pow(i, 2);
            printf("%d^2 = %d\n", i, q);
        }
    }
    return 0;
}