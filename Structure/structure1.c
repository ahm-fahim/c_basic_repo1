#include <stdio.h>

// global struct
// struct Person
// {
//     int age;
//     float salary;
// };
int main()
{
    //local strut
    struct Person
    {
        int age;
        float salary;
    };

    struct Person person1 = {33,35555}, person2;

    // person1.age = 21;
    // person1.salary = 30000;

    printf("Person1\n");
    printf("Age: %d\n", person1.age);
    printf("Salary: %.1f\n", person1.salary);

    person2.age = 23;
    person2.salary = 35000;

    printf("Person2\n");
    printf("Age: %d\n", person2.age);
    printf("Salary: %.1f\n", person2.salary);
}