#include<stdio.h>

void RevArr(int arr[], int size)  //Function prototype
{
  int i=0, j= size-1, temp;

    while(i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int a[100];
    int i, n;

    printf("                  Array Reverse\n");
    printf("               -------------------\n\n");
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    printf("\nEnter array elements: "); //input elements
       for(i=0; i<n; i++)
      {
        scanf("%d", &a[i]);
      }

    RevArr(a, n);   //Function for reverse the array

    //Print the reversed array
    printf("\nReversed array is: ");
      for(i=0; i<n; i++)
      {
        printf("%d ", a[i]);
      }

    printf("\n\n");

  return 0;
}
