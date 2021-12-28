#include <stdio.h>

int main()
{

    char c[1000];
    int i = 0;

    printf("Enter the string: ");
    scanf("%s", &c);

    printf("Ascii value is: ");

    while (c[i])
        printf("%d ", c[i++]);

    // int number;

    // printf("Enter a Ascii value:");
    // scanf("%d", &number);

    // printf("The Character Is: %c", number);

    return 0;
}