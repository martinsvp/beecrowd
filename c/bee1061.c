#include <stdio.h>
 
int main() {
    float diai,diaf,hi,mi,si,hf,mf,sf,t,a,b;
    int w,x,y,z;

    scanf("%*s %f",&diai);
    scanf("%f %*c %f %*c %f", &hi, &mi, &si);
    scanf("%*s %f",&diaf);
    scanf("%f %*c %f %*c %f", &hf, &mf, &sf);
    diai *= 86400;
    hi*=3600;
    mi*=60;
    a = diai + hi + mi + si;
    diaf *= 86400;
    hf*=3600;
    mf*=60;
    b = diaf + hf + mf + sf;
    t = b - a;
    w=(int)t/86400.0;
    t=((t/86400.0)-w)*86400;
    x=(int)t/3600.0;
    t=((t/3600.0)-x)*3600;
    y=(int)t/60.0;
    t=((t/60.0)-y)*60;
    z=t;

    printf("%d dia(s)\n", w);
    printf("%d hora(s)\n", x);
    printf("%d minuto(s)\n", y);
    printf("%d segundo(s)\n", z);

    return 0;   
}