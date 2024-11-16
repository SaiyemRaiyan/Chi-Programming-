#include<stdio.h>
void main()
{
   int i,sum=0;

    do
    {
        printf("\n Input: ");
        scanf("%d", &i);
        sum+=i;
    }
      while(i!=0);
        printf("\n The Sum is: %d",sum);

      getch();

}
