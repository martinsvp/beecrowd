#include <stdio.h>
 
int main() {
    int nCasos, caso;
    scanf("%d", &nCasos);

    for(int i=0; i<nCasos; i++) {
        scanf("%d", &caso);
        if(caso % 2 == 0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
    
    return 0;
}