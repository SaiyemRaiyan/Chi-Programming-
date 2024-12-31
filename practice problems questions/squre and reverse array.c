#include<stdio.h>

// Function to square the elements of the array
void squarearray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i] = arr[i]*arr[i];
    }
}

// Function to reverse the array using a for loop
void revarray(int arr[], int size)
{
    int temp;
    for(int i=0, j=size-1; i<j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    squarearray(arr, size);
    revarray(arr, size);

    printf("\nModified array (squared and reversed):\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

  return 0;
}

