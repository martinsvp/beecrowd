#include <stdio.h>
 
int main() {
    int seg, min, horas;
    scanf("%d", &seg);

    horas = seg/3600;
    seg %= 3600;
    min = seg / 60;
    seg %= 60;

    printf("%d:%d:%d\n", horas, min, seg);
    return 0;
}