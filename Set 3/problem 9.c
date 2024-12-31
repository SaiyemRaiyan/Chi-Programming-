#include<stdio.h>

       //Recursive function
int seriesSum(int term, int last)
{
    if(term > last)
    {
        return 0; //if term exceeds the last term, stop
    }
    return term + seriesSum(term+5, last); // Recursive step
}

int main()
{
    int sum = 0;

           //Calculate sum
    for(int i=1; i <= 101; i += 5)
    {
      sum += i;
    }

         //Calculate sum
    int sumRecursion = seriesSum(1, 101);

    // Print results
    printf("Sum of the series by loop: %d\n", sum);
    printf("Sum of the series by recursion: %d\n", sumRecursion);

  return 0;
}
