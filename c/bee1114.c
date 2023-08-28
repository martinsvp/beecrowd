#include <stdio.h>
#define SENHA 2002
 
int main() {
    int senha;
    while(1){
        scanf("%d", &senha);
        if(senha==SENHA){
            printf("Acesso Permitido\n");
            break;
        } else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}