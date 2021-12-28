#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20]="fahim",str2[20]="fahim";

    int d = strcmp(str1,str2);

    if(d == 0){
        printf("Are equal");
    }
    else{
        printf("Not equal");
    }

}