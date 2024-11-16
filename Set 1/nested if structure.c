#include<stdio.h>

int main()
{
    int age;
    char status;  //Status: 'W' for working, any other char for retired

    printf("Enter age: ");
    scanf("%d", &age);

    //If age is greater than 59
    if(age > 59)
    {
        // If age > 59, check the status
        printf("Enter status (w for working, any other character for retired): ");
        scanf(" %c", &status);  // Space before %c to handle any newline character in the buffer
        if(status == 'w')
        {
            printf("Working senior\n");
        }
         else
        {
            printf("Retired senior\n");
        }
    }
             else if (age > 20)
           {
               printf("Adult\n");    //If age is 59 or below and greater than 20
           }
             else if (age > 12)
           {
               printf("Teen\n");  //If age is 20 or below and greater than 12
           }
             else
           {
              printf("Child\n"); //If age is 12 or below
           }

    return 0;
}
