#include <stdio.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct Person person[4];
    int i;

    printf("ADD INFO\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("Person: %d\n", i + 1);

        printf("Name: ");
        fflush(stdin);
        gets(person[i].name);

        printf("Age: ");
        scanf("%d", &person[i].age);

        printf("Salary: ");
        scanf("%f", &person[i].salary);
    }

    printf("\n\nINFO\n");

    for (i = 0; i < 4; i++)
    {
        printf("\nPerson: %d\n", i + 1);
        printf("Age: %s\n", person[i].name);
        printf("Age: %d\n", person[i].age);
        printf("Salary: %f\n", person[i].salary);
    }

    return 0;
}