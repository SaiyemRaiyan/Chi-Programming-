// 1/1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + 1/7 -......... +- 1/n

#include<stdio.h>

int main()
{
  int n;
  float sum = 0, term;

  scanf("%d", &n);

  for(int i=1; i<=n; i++)
  {
      term = 1.0/i;

      if(i%2 == 0)
      {
          sum = sum - term;
      }
      else
      {
          sum = sum + term;
      }

      printf("%f", sum);

  }
    return 0;
}

