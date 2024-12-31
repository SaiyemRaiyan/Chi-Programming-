#include<stdio.h>
int main()
{
    int A[100][100], B[100][100], C[100][100];
    int i, j, rowsA, columnsA, rowsB, columnsB;

    printf("Number of rows in A: ");
    scanf("%d", &rowsA);
    printf("Number of columns in A: ");
    scanf("%d", &columnsA);
    printf("Number of rows in B: ");
    scanf("%d", &rowsB);
    printf("Number of columns in B: ");
    scanf("%d", &columnsB);

    if(rowsA != rowsB || columnsA != columnsB)
    {
        printf("Invalid matrix dimensions\n");
        return 0;
    }


      for(i=0; i<rowsA; i++)
    {
        for(j=0; j<columnsA; j++)
        {
            printf("A[%d][%d]: ",i, j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<rowsB;i++)
    {
        for(j=0; j<columnsB; j++)
        {
            printf("B[%d][%d]: ",i, j);
            scanf("%d",&B[i][j]);
        }
    }
        for(i=0; i<rowsA; i++)
    {
        for(j=0; j<columnsA; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nResult: \n");
    for(i=0;i<rowsA;i++)
    {
        for(j=0; j<columnsA; j++)
        {
            printf("%10d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}

