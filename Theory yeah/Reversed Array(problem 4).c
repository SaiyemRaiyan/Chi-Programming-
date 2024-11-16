#include<stdio.h>
main()
{
    int a[100];
    int i,j,n,tem;
    printf("Enter the number of array elements: ");
    scanf("%d",&n);
    printf("Input array elements: ");
    for(i=0; i<n; i++)
    {

      scanf("%d",&a[i]);
    }


      i=0;
      j=n-1;
    while(i<j)
    {
        tem=a[i];
        a[i]=a[j];
        a[j]=tem;

        i++;
        j--;
    }
        printf("Reversed array: ");
         for(i=0; i<n; i++)
         {
            printf("%d ",a[i]);
         }

    return 0;
    getch();


}
