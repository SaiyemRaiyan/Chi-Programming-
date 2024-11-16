#include<stdio.h>
int main()
{

    int N,row,col;

    printf("Enter any number:");
    scanf("%d",&N);

     int A[N][N];
    for(row=0; row<N; row++)
    {
        for(col=0; col<N; col++)
        {
            if(row == col)
                A[row][col]=0;
            else if(row>col)
                A[row][col]=-1;
            else
                A[row][col]=1;
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
}


