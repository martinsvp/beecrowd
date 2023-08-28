#include <stdio.h>
 
int main() {
    int afast, dist, min;
    afast = 2; // 1km - 2min
    scanf("%d", &dist);

    min = dist*afast;
    printf("%d minutos\n", min);
    return 0;
}