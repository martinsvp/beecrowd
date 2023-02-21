#include <stdio.h>
 
int main() {
    int x;
    scanf("%d", &x);

    for(int i=0; i<12; i++){
        if((x+i)%2!=0){
            printf("%d\n", x+i);
        }
    }
    return 0;
}