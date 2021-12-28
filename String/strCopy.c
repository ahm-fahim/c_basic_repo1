#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "C programming";
    char target [20] ;

    strcpy(target,str);

    printf("Str: %s\n", str); 
    printf("Target: %s\n", target);
}