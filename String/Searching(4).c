#include<stdio.h>
void removeFromArray( int A[ ], int N, int V)
{
    int a,b,i;
    for(a=0;a<N;a++)
      {
        if(A[a]==V)
        {
        for(i=a;i<N;i++)
          {
            A[i]=A[i+1];
          }
        }
      }
    A[N-1]=0;
}

main()
{
    int N,V,i,m,x;
    printf("Enter N:");
    scanf("%d",&N);
    int A[N];
    printf("Enter Array:");
     for(i=0;i<N;i++)
     {
         scanf("%d",&A[i]);
     }
     printf("Enter V:");
     scanf("%d",&V);
     removeFromArray(A,N,V);
        for(m=0;m<N;m++)
        {
            printf("%d",A[m]);
        }
}
