#include<stdio.h>

          //nth Fibonacci number
int fibonacciRecursive(int n)
{
    if(n <= 1)
        return n;

    return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
}

     //nth Fibonacci number
int fibonacci(int n)
{
    if(n <= 1)
        return n; //Base cases

    int p=0, q=1, c;
    for(int i=2; i <= n; i++)
    {
        c = p+q;
        p = q;
        q = c;
    }
    return q;
}

          //Sum of first n Fibonacci terms
int fibonacciSum(int n)
{
    int sum=0, p=0, q=1, c;

    for(int i=0; i<n; i++)
    {
        if(i == 0)
          c=p;

        else if(i == 1)
           c=q;

        else
        {
           c = p+q;
           p = q;
           q = c;
        }
          sum = sum+c;
    }

  return sum;
}

int main()
{
    int n;

    printf("<<<<<<<<<<<<<<<<<<<<<<<<< Fibonacci Numbers >>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);

          //nth Fibonacci
    int fib = fibonacci(n);
    printf("\nFibonacci number at position %d: %d\n", n, fib);

          //nth Fibonacci by recursive method
    int fibRec = fibonacciRecursive(n);
    printf("\nFibonacci number at position %d (recursive): %d\n", n, fibRec);

          //Sum of first n Fibonacci terms
    int sumFib = fibonacciSum(n);
    printf("\nSum of the first %d Fibonacci numbers: %d\n", n, sumFib);

  return 0;
}

