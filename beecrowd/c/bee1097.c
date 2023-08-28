#include <stdio.h>
 
int main() {
    int i=1, j=7, cont=0;
    while (i<=9){
        while(cont<3){
            printf("I=%d J=%d\n", i, j);
            j--;
            cont++;
        }
        j+=5;
        cont=0;
        i+=2;
    }
    
    return 0;
}