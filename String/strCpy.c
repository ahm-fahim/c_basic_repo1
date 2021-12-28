#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20]= "Fahim";
    char str2[20] = "Morshed";
    char temp[20];

    strcpy(temp, str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("Str1: %s\n",str1);
    printf("Str2: %s\n",str2);
}