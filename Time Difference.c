#include<stdio.h>
int main()
{
  int h1, m1, h2, m2, h, m, n;
  printf("Enter the time of first city: ");
  scanf("%d%d", &h1, &m1);
  printf("Enter the time of second city: ");
  scanf("%d%d", &h2, &m2);

    n = (h1*60+m1)-(h2*60+m2);
    h = n/60;
    m = n%60;

 printf("Time difference:  %d hours %d minutes", h, m);

return 0;
}
