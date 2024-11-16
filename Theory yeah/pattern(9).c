#include<stdio.h>
int main()
{
  int i=0,b=0,n;
  printf("Input n:");
   do
   {
       scanf("%d",&n);
   }
     while(n>9);
  do
   {
     do
      {
        printf("%d ",b);
        b--;
      }
        while(b>=0);
        printf("\n");
        i++;
        b=i;
    }
        while(i<n);
}
