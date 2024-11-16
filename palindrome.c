#include<stdio.h>
int main()
{
    int n, num, rev_num=0, digit;
    printf("Input any digit Number: ");
    scanf("%d", &n);

    num = n;

   while(n>0)
  {
    digit = n%10;
    rev_num = rev_num*10 + digit;
    n = n/10;
  }

     if(num == rev_num)
    {
      printf("Palindrome");
    }
     else
    {
      printf("Not Palindrome");
    }

 return 0;

}

