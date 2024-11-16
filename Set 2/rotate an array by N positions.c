#include<stdio.h>

                //Shifting array to the left
void shiftArr1Pos(int arr1[], int arrSize)
{
    int temp = arr1[0];

       for(int i=0; i<arrSize-1; i++)
      {
        arr1[i] = arr1[i+1];
      }
       arr1[arrSize-1] = temp;
}

                //Rotate the array by N positions
void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{
       for(int i=0; i<rotFrom; i++)
      {
        shiftArr1Pos(arr1, arrSize);
      }
}

int main()
{
    int arr[100], n, rotFrom;

    printf("                  Rotate Array by N Positions\n");
    printf("               ---------------------------------\n\n");

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);  //Input the array

    printf("Enter array elements: ");  //Input Array Elements
       for(int i=0; i<n; i++)
      {
        scanf("%d", &arr[i]);
      }

      printf("Enter N: ");
      scanf("%d", &rotFrom);   //Input the number of positions to rotate

    // Display elements from rotFrom
    printf("\nFrom index %d position, array elements are: ", rotFrom);
       for(int i=rotFrom; i<n; i++)
      {
        printf("%d ", arr[i]);
      }

    printf("\nArray elements prior to index %d: ", rotFrom);  //Display elements before rotFrom
       for(int i=0; i<rotFrom; i++)
      {
        printf("%d ", arr[i]);
      }

    arr1Rotate(arr, n, rotFrom);   //Rotate the array

    printf("\nAfter rotating from index %d, the array is: ", rotFrom);  //Print the rotate array
       for(int i=0; i<n; i++)
      {
        printf("%d ", arr[i]);
      }

    printf("\n\n");

  return 0;
}
