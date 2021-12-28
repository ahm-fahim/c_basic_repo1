/*
    c/5  = f-32/9
    =>c = 5(f-32)/9
    =>c = f-32/1.8
*/
#include <stdio.h>

int main(){
    double cel, fah;

    scanf("%lf",&fah);

    cel = (fah - 32)/1.8;

    printf("Celcius temp: %.2lf", cel);

    return 0;
}