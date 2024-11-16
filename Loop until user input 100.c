#include<stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    sum += num;

    while(num != 100)
    {
        printf("Enter a number again: ");
        scanf("%d", &num);
        sum += num;
    }
    printf("The sum is: %d", sum);
}
