#include <stdio.h>
#include <stdlib.h>

int verificaTriangulo(int a, int b, int c) {
    if((abs(b - c) < a && a < b + c) && (abs(a - c) < b && b < a + c) && (abs(a - b) < c && c < a + b)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(verificaTriangulo(a, b, c) || verificaTriangulo(a, b, d) || verificaTriangulo(a, c, d) || verificaTriangulo(b, c, d)) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}