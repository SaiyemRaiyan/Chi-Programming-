#include<stdio.h>
int main()
{
    int fact=1, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i<=num; i++)
    {
        fact = fact * i;
    }

     printf("%d", fact);

  return 0;
}
