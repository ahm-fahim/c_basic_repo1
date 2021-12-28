/*
    c/5 = f-32/9 = k-273/5

    celcius to fahrenheit formula 
    c/5 = f-32/9 
    =>5(f-32)= 9c
    =>f-32 = 9c/5
    =>f = 1.8c + 32
    f = (c * 1.8 ) + 32

*/

#include <stdio.h>

int main()
{
    double cel, fah;

    scanf("%lf", &cel);

    fah = (cel * 1.8) + 32;

    printf("Fahrenheit temp: %.2lf", fah);

    return 0;

}