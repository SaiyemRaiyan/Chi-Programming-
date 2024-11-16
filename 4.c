#include<stdio.h>
 int main()
{
 	int i,j,row,column, a[10][10],s= 1;

 	printf("Enter Number of rows and columns: ");
 	scanf("%d %d",&i,&j);

 	printf("Enter Matrix Elements: \n");
 	for(row=0; row<i; row++)
  	{
   		for(column=0; column<j; column++)
    	{
      		scanf("%d",&a[row][column]);
    	}
  	}

 	for(row=0; row<i; row++)
  	{
   		for(column=0; column<j; column++)
    	{
    		if(a[row][column]!=1 && a[column][row]!= 0)
    		{
    			s=0;
    			break;
			}
   	 	}
  	}
  	if(s==1)
  	{
  		printf("The Matrix is an Identity Matrix ");
	}
	else
	{
		printf("The Matrix is Not an Identity Matrix ");
	}

 	return 0;
}
