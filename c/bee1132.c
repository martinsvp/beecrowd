#include <stdio.h>
 
int main() {
    int x, y, soma=0;
    scanf("%d\n%d", &x, &y);

    if(x <= y) {
        for (int i=x; i <= y; i++) {
            if (i%13!=0) {
                soma += i;
            }
        }
    } else {
        for (int i=y; i <= x; i++) {
            if (i%13!=0) {
                soma += i;
            }
        }
    }
    
    printf("%d\n", soma);
    return 0;
}