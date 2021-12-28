//circle area pi*r*r
// range = 2 * pi * r
#include <stdio.h>
#include <math.h>

int main()
{
    double r, area;

    scanf("%lf", &r);

    area = M_PI * r * r;

    printf("Area: %.2lf", area);

    return 0;
}