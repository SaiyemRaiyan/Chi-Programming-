#include<stdio.h>
int main()
{
  int a, b, c, max;

  printf("Enter 3 numbers: ");
  scanf("%d%d%d", &a, &b, &c);

  if(a>b)
  {
    max = a;
  }
  else if(b>a)
  {
    max = b;
  }
  else if(c>max)
  {
    max = c;
  }
  else
  {
    printf("All numbers are equal");
  }

  printf("Maximum number is: %d", max);

 return 0;
}
