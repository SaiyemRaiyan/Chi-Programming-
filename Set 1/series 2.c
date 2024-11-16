#include<stdio.h>

int main()
{
    int n, i;
    double sum=0.0;

    printf("Enter the term number of the series: ");
    scanf("%d", &n); // Input the term number

    //Loop for calculate the sum of the series
    for(i=1; i<=n; i++)
    {
        if(i%2 == 1)
        {
            sum = sum + ((double)i/(i+1)); // when i is odd, add number
        }
          else
        {
            sum = sum - ((double)i/(i+1)); // when i is even, subtract number
        }
    }

    printf("The sum of the series is: %.5lf\n", sum); //print sum

  return 0;
}

