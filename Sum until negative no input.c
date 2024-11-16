#include<stdio.h>

int main()
{
    int count = 0;
    float number, sum = 0, average;

    printf("Enter numbers one by one (enter a negative number to stop):\n");

    //Until a negative number is entered
    while(1)
    {
        scanf("%f", &number);

        // Stop if a negative number is entered
        if (number < 0)
        {
            break;
        }
        sum += number;
        count++;
    }

    // Calculate and display the average if count is greater than 0
    if(count > 0)
    {
        average = sum/count;
        printf("The average of the entered numbers is: %.2f\n", average);
    }
    else
    {
        printf("No valid numbers entered.\n");
    }

    return 0;
}

