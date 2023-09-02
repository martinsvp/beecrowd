#include <stdio.h>
 
int main() {
    int hi, mi, hf, mf, tempo, horas, minutos;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    
    mi += hi*60;
    mf += hf*60;
    tempo = mf - mi;
    if(tempo <= 0)
        tempo += 24*60;

    horas = tempo/60;
    minutos = tempo%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    return 0;
}