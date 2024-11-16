#include<stdio.h>
int main()
{
 int feet, inch, height;
 printf("Enter your height: ");
 scanf("%d", &height);

  feet = height/12;
  inch = height%12;

  printf("Your height: %d feet  % inch", feet, inch);

return 0;
}
