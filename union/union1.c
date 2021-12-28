#include <stdio.h>

union Value{
    int x,y;
};

int main()
{
    union Value value;

    value.x = 10;

    printf("Value.x = %d\n", value.x);
    printf("Value.y = %d\n", value.y);

}