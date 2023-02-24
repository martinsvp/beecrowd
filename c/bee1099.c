#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int x, y, somaImp=0;
        scanf("%d %d", &x, &y);

        if(x<y){
            for(int j=x+1; j<y; j++){
                if(j%2!=0){
                    somaImp += j;
                }
            }
        } else {
            for(int j=y+1; j<x; j++){
                if(j%2!=0){
                    somaImp += j;
                }
            }
        }

        printf("%d\n", somaImp);
    }
    return 0;
}