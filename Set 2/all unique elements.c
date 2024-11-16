#include<stdio.h>

int main()
{
    int n, count=0;

    printf("               Unique Elements of an Array\n");
    printf("           ----------------------------------\n\n");
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int arr[n];  //array declare

    printf("\nEnter the elements: "); //input elements
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //display unique elements
    printf("\nUnique elements in the array are: ");
         for(int i=0; i<n; i++)
        {
            int j;
             // Check if arr[i] appears in the array
             for(j=0; j<n; j++)
            {
                 if(arr[i] == arr[j] && i != j) //unique checking
                {
                    break;  //If element is not unique, exit loop
                }
            }
               //If the loop done without breaking, the element is unique
                 if(j == n)
               {
                 printf("%d ", arr[i]);
                    count++;
               }
        }
                if(count == 0)
               {
                 printf("0");
               }

       printf("\n\n");

    return 0;
}

