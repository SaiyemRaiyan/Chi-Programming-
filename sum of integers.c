#include<stdio.h>
int main()
{
    int num, sum=0;
    int i = 0;
    while(i<10)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = sum + num;
        i++;
    }
    printf("The sum of the number is: %d", sum);
    return 0;
}
