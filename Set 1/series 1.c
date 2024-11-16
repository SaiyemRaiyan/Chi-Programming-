#include <stdio.h>

int main()
{
    int num_terms;
    int term=5, diff=4, sum=0;

    printf("Enter the term number of the series: ");
    scanf("%d", &num_terms); // Input the term number

    int i=1;
    //Loop for calculate the sum of the series
    while(i <= num_terms)
    {
        sum = sum + term*term; // Add the square of the current term to sum
        term = term+diff;     // Update the term according to the pattern
        diff = diff+2;       // Increment the difference by 2 for the next term
        i++;                // Increment counter
    }

    printf("The sum of the series is: %d\n", sum); //print sum

    return 0;
}


