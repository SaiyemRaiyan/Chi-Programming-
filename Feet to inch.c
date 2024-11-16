#include<stdio.h>
int main()
{
  int feet, inch, convert;
   printf("Feet: ");
   scanf("%d", &feet);
   printf("Inch: ");
   scanf("%d", &inch);

    convert = feet*12+inch;
   printf("Feet Inch = ");
   printf("%d", convert);
 return 0;
}
