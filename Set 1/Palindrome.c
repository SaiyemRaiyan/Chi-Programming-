#include<stdio.h>

int main()
{
    int n, num=1, count=0, rev_num, rem, original_num;

    printf("How many palindrome number you want to see? ");
    scanf("%d", &n);

    printf("\nFirst %d palindrome numbers are:\n", n);

    while(count < n)
    {
        original_num = num;
        rev_num=0;

        while(num != 0)
        {
            rem = num%10;
            rev_num = rev_num*10 + rem;
            num = num/10;
        }

             if(original_num == rev_num)
            {
              printf("%d ", original_num);
              count++;
            }

           num = original_num+1;
    }

    printf("\n\nThe final palindrome number is: %d\n", num-1);

    return 0;
}
