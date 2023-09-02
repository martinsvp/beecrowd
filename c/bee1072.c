#include <stdio.h>
 
int main() {
    int n, x;
    scanf("%d", &n);

    int in = 0;
    int out = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &x);
        if(x>=10 && x<=20){
            in++;
        } else{
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}