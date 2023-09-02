#include <stdio.h>
 
int main() {
    int opc, nA=0, nG=0, nD=0;

    while (1)
    {
        while (1)
        {
            scanf("%d", &opc);
            if (opc >= 1 && opc <= 4) {
                break;
            }
        }
        switch (opc)
        {
            case 1:
                nA++;
                break;
            case 2:
                nG++;
                break;
            case 3:
                nD++;
                break;       
        }
        if (opc == 4) {
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", nA);
    printf("Gasolina: %d\n", nG);
    printf("Diesel: %d\n", nD);
    
    return 0;
}