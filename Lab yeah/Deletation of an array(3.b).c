#include<stdio.h>
int main()
{
    int i,j,n,x,c=0;
    printf("Enter array size :");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to delete :");
    scanf("%d",&x);

    for(i=0; i<n; i++)
    {
       if(a[i]==x)
        c++;
    }
    if(c==0)
        printf("Element not found \n");
    else
  {
        for(int k=0; k<c; k++)
   {

         for(i=0; i<n; i++)
	  {
		if(a[i]==x)
		{
			for(j=i; j<(n-1); j++)
			{
				a[j]=a[j+1];
			}
		}
	  }
   }

        n=n-c;
       printf("New array after deleting %d :",x);

       for(i=0;i<n;i++)
       {
           printf(" %d ",a[i]);
       }
  }
    return 0;
    getch();
}

