#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Person Information %d: \n", i+1);
        printf("Age: ");
        scanf("%d", &person[i].age);
        printf("Salary: ");
        scanf("%f", &person[i].salary);
    }

       for(i=0; i<4; i++)
    {
        printf("\n\nPerson Information %d\n", i+1);
        printf("Age: %d\n", person[i].age);
        printf("Salary: %f\n", person[i].salary);
    }

}