#include<stdio.h>

// Function to check if a number is a palindrome
int findpalin(int num)
{
    int original_num;
    int rem, rev_num=0;

     original_num = num;

    // Calculate the reverse of the number
    while(num != 0)
    {
        rem = num%10;
        rev_num = rev_num*10 + rem;
        num = num/10;
    }

    //Check if the original number is equal to the reversed number
    if(original_num == rev_num)
    {
        return 1;  // The number is a palindrome
    }
    else
    {
        return 0;  // The number is not a palindrome
    }
}

int main()
{
    int m, n, sum=0;

    printf("<<<<<<<<<<<< Palindrome Number and SUM >>>>>>>>>>>>\n\n");

    // Input the start and end of the range
    printf("Enter start of the range: ");
    scanf("%d", &m);
    printf("Enter end of the range: ");
    scanf("%d", &n);

    printf("\nPalindrome numbers between %d and %d are:\n", m, n);

    // Loop through the range to find palindrome numbers
    for(int num=m; num<=n; num++)
    {
        // Check if the number is a palindrome
        if(findpalin(num))
        {
            printf("%d ", num);
            sum = sum+num;   //Add the palindrome number to the sum
        }
    }

    //Sum of palindrome numbers in the range
    printf("\n\nThe sum of palindrome numbers between %d and %d is: %d\n", m, n, sum);

    return 0;
}
