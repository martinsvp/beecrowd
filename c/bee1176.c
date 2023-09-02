#include <stdio.h>

long long int nFibo(int p) {
    long long int termo;
    
    if (p==0) {
        termo = 0;
        return termo;
    }
    if (p==1 || p==2) {
        termo = 1;
        return termo;
    }
    
    termo = nFibo(p-1) + nFibo(p-2);
    return termo;
}

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        int pos;
        scanf("%d", &pos);
        printf("Fib(%d) = %lld\n", pos, nFibo(pos));
    }
    return 0;
}