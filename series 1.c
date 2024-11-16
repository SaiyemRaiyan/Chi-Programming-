// x^0+x^1+x^2+x^3+......+x^n

#include<stdio.h>

int main()
{
    int x, n, term = 1, sum = 1;

    scanf("%d%d", &x, &n);

    for(int i = 1; i<=n; i++)
    {
        term = term * x;
        sum = sum + term;
    }

    printf("Sum = %d", sum);

    return 0;
}
