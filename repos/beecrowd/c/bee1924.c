#include <stdio.h>
#define CURSO "Ciencia da Computacao"

int main() {
    int n;
    char curso[100];
    scanf("%d", &n);
    getchar();

    for(int i=0; i<n; i++) {
        fgets(curso, 100, stdin);
        fflush(stdin);
    }
    
    printf("%s\n", CURSO);

    return 0;
}