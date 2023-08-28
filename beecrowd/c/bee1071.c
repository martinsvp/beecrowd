#include <stdio.h>
 
int main() {
    int x, y;
    int somaImp = 0;
    scanf("%d\n%d", &x, &y);

    if(x>y){
        y+=1;
        for(int i = y; i<x; i++){
            if(i%2!=0){
                somaImp+=i;
            }
        }
    } else if(x<y){
        x+=1;
        for(int i = x; i<y; i++){
            if(i%2!=0){
                somaImp+=i;
            }
        }
    } else{
        somaImp = 0;
    }

    printf("%d\n", somaImp);
    return 0;
}