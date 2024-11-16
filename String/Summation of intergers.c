#include<stdio.h>
int summation(int array[],int b,int M)
{
    int i,d=0;
    for(i=0;i<b;i++)
    {
        if(array[i]>M)
            d=d+array[i];
    }
    return d;
}

main()
{
    int n,i,t,X;
    printf("Enter the numbers of values:");
    scanf("%d",&n);
    printf("Enter the values:");
    int N[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    scanf("%d",&X);
    t=summation(N,n,X);
    printf("Summation is %d",t);
}
