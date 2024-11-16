#include<stdio.h>

//Function to check whether a number is prime or not
int checkPrimeNumber(int n)
{
    if(n <= 1)
    {
        return 0; //0 and 1 are not prime numbers
    }

    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            return 0; //Not a prime number
        }
    }

    return 1; //Prime number
}

int main()
{
    int num, count=0;
        printf("          Sum of Prime Numbers\n");
        printf("        ------------------------\n\n");

    while(1)
    {
        printf("Enter an integer: ");
        scanf("%d", &num);

             // Exit loop if a negative number is entered
        if(num < 0)
        {
            break;
        }
            if(num == 0 || num == 1)
           {
               continue; //Skip if the number is 0 or 1
           }

              if(checkPrimeNumber(num))
            {
                printf("%d is Prime, add to sum\n", num);
                count = count + num;
            }
          else
        {
            printf("%d Not prime\n", num);
        }
    }

      printf("The sum = %d\n", count);

  return 0;
}
