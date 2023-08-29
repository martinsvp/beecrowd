#include <stdio.h>
 
int main() {
    int t1, t2, t3, t4, res;
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    res = (t1 + t2 + t3 + t4) - 3;

    printf("%d\n", res);
    
    return 0;
}