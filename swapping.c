#include<stdio.h>
int main()
{
   int n1,n2,temp;

   printf("Enter your two values: ");
   scanf("%d%d", &n1, &n2);

   temp = n1;
   n1 = n2;
   n2 = temp;

   printf("Swapping values are: %d %d", n1,n2);

 return 0;

}
