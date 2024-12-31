#include<stdio.h>

int main()
{
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr[n][m];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
          scanf("%d", &arr[i][j]);
        }
    }

    int diagSum=0, borderSum=0;
    int maxRowSum=0, maxColSum=0;


    for(int i=0; i<n; i++)
    {
        int rowSum=0, colSum = 0;
        for(int j=0; j<m; j++)
        {
                  // Diagonal sum
            if(i == j)
               diagSum += arr[i][j];

                //Border elements
            if (i == 0 || i == n-1 || j == 0 || j == m-1) borderSum += arr[i][j];

                //Row and column sums
            rowSum += arr[i][j];
            colSum += arr[j][i];
        }
        if(rowSum > maxRowSum)
            maxRowSum = rowSum;
        if(colSum > maxColSum)
            maxColSum = colSum;

        printf("Row%d sum: %d\n", i, rowSum);
        printf("Column%d sum: %d\n", i, colSum);
    }

             //Display
    printf("Sum of main diagonal elements: %d\n", diagSum);
    printf("Sum of border elements: %d\n", borderSum);
    printf("Maximum row sum: %d\n", maxRowSum);
    printf("Maximum column sum: %d\n", maxColSum);

   return 0;
}
