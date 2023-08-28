#include <stdio.h>
 
int main() {
    int n, qntd=0, qntdC=0, qntdR=0, qntdS=0, total=0;
    double perC, perR, perS;
    char tipo;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d %c", &qntd, &tipo);
        if(tipo=='C'){
            qntdC+=qntd;
        } else if (tipo=='R'){
            qntdR+=qntd;
        } else if (tipo=='S'){
            qntdS+=qntd;
        }
    }
    total = qntdC + qntdR + qntdS;
    perC = (qntdC/(double)total)*100;
    perR = (qntdR/(double)total)*100;
    perS = (qntdS/(double)total)*100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", qntdC);
    printf("Total de ratos: %d\n", qntdR);
    printf("Total de sapos: %d\n", qntdS);
    printf("Percentual de coelhos: %.2lf %%\n", perC);
    printf("Percentual de ratos: %.2lf %%\n", perR);
    printf("Percentual de sapos: %.2lf %%\n", perS);
    return 0;
}