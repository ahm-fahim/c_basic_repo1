#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Hello";
    char str2[20];
    // strrev(str);
    // printf("%s", str);

    int i = 0, j, len = 0;

    while (str1[i] != '\0')
    {
        i++;
        len++;
    }

    for (i; i = len - 1, i >= 0; i--)
    {
        for (j = 0; ;j++)
        {
            str2[j] = str1[i];
        }
    }
    str2[j] = '\0';

    printf("Str: %s", str1);
    printf("Str: %s", str1);

    return 0;
}