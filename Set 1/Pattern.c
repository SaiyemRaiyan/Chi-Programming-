#include<stdio.h>

// Function for the diamond pattern
void patternDiamond(int rows)
{
    int n= rows/2; // Adjust for upper and lower half

    printf("\nDiamond Pattern:\n");

    // Upper half

    for(int i=1; i<= n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
           printf("*");

        if(i>1)
        {
            for(int k = 1; k <= 2*(i-1)-1; k++)
            {
                printf(" ");
            }
              printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(int i=n; i >= 1; i--)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
          printf("*");

        if(i>1)
        {
            for(int k = 1; k <= 2*(i-1)-1; k++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

// Function for the triangle pattern
void patternTriangle(int rows)
{
    printf("\nTriangle Pattern:\n");

    // First half: Increasing triangle
    for(int i=1; i <= rows; i++)
    {
        for (int j=1; j <= i; j++)
        {
            printf("* ");
        }
          printf("\n");
    }

    //Decreasing triangle
    for(int i = rows-1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("* ");
        }
         printf("\n");
    }
}

//Increasing sequence of numbers pattern
void patternSequence(int n)
{
    printf("\nIncreasing Sequence Pattern:\n");

    int i, j, rows=5;

    for(i=1; i <= rows; i++)
    {
        for (j=rows; j >= i; j--)
        {
            printf("%c ", j+64);
        }
          printf("\n");
    }
}

//Alternating sequence pattern
void patternAlternating(int n)
{
    printf("\nAlternating Sequence Pattern:\n");

    for(int i=1; i <= n; i++)
    {
        int s;

        if(i%2 == 1)
        {
            s=1;  //Start with 1 for odd rows
        }
           else
        {
            s=2;  //Start with 2 for even rows
        }

        for(int j=0; j <(i+1)/2; j++)
        {
            printf("%d ", s+2 * j);  // Increase by 2 for each element
        }
          printf("\n");
    }
}

// Main function
int main()
{
    printf("           ---------------------------------------------\n");
    printf("            <<<<<<<<<<<< Draw Patterns >>>>>>>>>>>>>>>\n");
    printf("           ---------------------------------------------\n\n");

    int diamondRows=10;
    int triangleRows=5;
    int sequenceRows=6;
    int alternatingRows=6;

    // Print all patterns
    patternDiamond(diamondRows);
    patternTriangle(triangleRows);
    patternSequence(sequenceRows);
    patternAlternating(alternatingRows);

  return 0;
}
