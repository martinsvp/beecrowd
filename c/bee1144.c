#include <stdio.h>
 
int main() {
    int n, v=1;
    scanf("%d", &n);
    n*=2;

    for (int i=0; i<n; i++)
    {
        printf("%d %d %d\n", v, ((v*v) + (i%2)), ((v*v*v) + (i%2)));
        v += i%2;
    }
    
    return 0;
}