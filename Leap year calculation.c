#include<stdio.h>
int main()
{
    int y;

    printf("Enter an year: ");
    scanf("%d", &y);

    if(y%4 == 0)
    {
        printf("Leap year");
    }
    else if(y%100 == 0)
    {
        Printf("Not a leap year");
    }
    else if(y%400 == 0)
     {
        printf("Leap year");
     }
    else
    {
        printf("No leap year");
    }

    return 0;
}

