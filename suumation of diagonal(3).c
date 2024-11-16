#include<stdio.h>
 int main()
{
 	int i,j,row,column,a[10][10],
 	Sum = 0;

 	printf("Enter row and column: ");
 	scanf("%d %d",&i,&j);

 	printf("Enter Matrix Elements \n");
 	for(row=0; row<i; row++)
  	{
   		for(column=0;column<j;column++)
    	{
      		scanf("%d",&a[row][column]);
    	}
  	}

 	for(row=0; row<i; row++)
  	{
   		Sum=Sum+a[row][row];
  	}

 	printf("The summation of diagonals= %d",Sum);

 	return 0;
}
