#include <stdio.h>
 
int main() {
    int codigo, qntd;
    double total;
    scanf("%d %d", &codigo, &qntd);

    switch (codigo){
        case 1:
            total = qntd*4;
            break;
        case 2:
            total = qntd*4.5;
            break;
        case 3:
            total = qntd*5;
            break;
        case 4:
            total = qntd*2;
            break;
        case 5:
            total = qntd*1.5;
            break;
    }

    printf("Total: R$ %.2lf\n", total);
    return 0;
}