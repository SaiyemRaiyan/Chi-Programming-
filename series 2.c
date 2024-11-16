// 1/1+1/2+1/3+......+1/n

#include<stdio.h>

int main()
{
    int n, term = 1;
    float sum = 1;

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        term = 1.0 / i;
        sum = sum + term;
    }
    printf("Sum = %.2f", sum);

    return 0;
}
