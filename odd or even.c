#include<stdio.h>
int main()
{
  int n, w;

  scanf("%d", &n);
  w = n%2;

   if (w == 0)
     printf("Even");
   else
     printf("Odd");
return 0;
}
