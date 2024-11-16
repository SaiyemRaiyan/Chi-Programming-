#include<stdio.h>

int main()
{
 int a,b,c,sum,max;

 printf("Enter 3 number: ");
 scanf("%d%d%d", &a, &b, &c);

 if(a>b)
 {
     max = a;
     sum = b;
 }
 else if(b>a)
 {
     max = b;
     sum = a;
 }
 else if(c>max)
 {
     sum = max;
     max = c;
 }
 else
 {
     if(c>sum)
        sum = c;
 }
      printf("2nd largest number is %d", sum);

 return 0;
}
