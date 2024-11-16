#include <stdio.h>
int main()
{
   int a,b,c,d,first[10][10],second[10][10],sum[10][10];

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d",&a,&b);
   printf("Enter first array elements:\n");

   for (c=0; c<a; c++)
      for (d=0; d<b; d++)
         scanf("%d", &first[c][d]);

   printf("Enter second array elements:\n");

   for (c=0; c<a; c++)
      for (d=0 ; d<b; d++)
         scanf("%d", &second[c][d]);

   printf("Sum:\n");

   for (c=0; c<a; c++) {
      for (d=0 ; d<b; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }

   return 0;
}
