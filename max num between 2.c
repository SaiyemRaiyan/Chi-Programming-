#include<stdio.h>
int main()
{
  int n1, n2, max;
  printf("Enter 2 numbers: ");
  scanf("%d%d", &n1, &n2);

  if(n1 > n2)
    max = n1;
  else
    max = n2;

 printf("Maximum Number: %d", max);

return 0;
}
