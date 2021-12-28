#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "hello";
    char str2[] = " world";

    // printf("%s ",strcat(str1, str2));

    int i = 0, j = 0, len = 0;

    while (str1[i] != '\0')
    {
        i++;
        len++;
    }
    while (str2[j] != '\0')
    {
        str1[len + j] = str2[j];
        j++;
    }
    printf("%s\n ",str1);
    printf("%s\n ",str2);

}