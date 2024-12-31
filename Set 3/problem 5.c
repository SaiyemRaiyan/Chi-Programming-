#include<stdio.h>

        //Function using array (5a)
void rev_arr(int arr1[], int rev_arr1[], int size)
{
    int j = size-1; //Start from the last element
    for (int i=0; i<size; i++)
    {
      rev_arr1[i] = arr1[j];
         j--;
    }
}

          //Function using pointer (5b)
void rev_arr2(int *arr1, int *rev_arr1, int size)
{
    int *e = arr1 + size-1; //Pointer to the last element
    for(int i=0; i<size; i++)
    {
      *(rev_arr1 + i) = *e;
         e--;
    }
}

int main()
{
    int arr[50], rev[50], size;

    printf("-------------------- Array Reverse -------------------\n\n");
    printf("Enter Array Size: ");
    scanf("%d", &size);

    printf("\nEnter Array Elements:\n");
    for(int i=0; i<size; i++)
    {
      scanf("%d", &arr[i]);
    }

         //Reverse array (5a)
           rev_arr(arr, rev, size);
    printf("\nReversed array (array notation): ");
    for(int i=0; i<size; i++)
    {
       printf("%d ", rev[i]);
    }

          //reverse` array for pointer (5b)
    printf("\nReversed array (pointer): ");
       rev_arr2(arr, rev, size);

    for(int i=0; i<size; i++)
    {
        printf("%d ", rev[i]);
    }

    printf("\n\n");

   return 0;
}

