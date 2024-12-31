#include<stdio.h>

int max(int* p, int size)
{
    int max_num = *p; //First element as the largest

     for(int i=1; i<size; i++)
    {
         if(*(p+i) > max_num)
        {
          max_num = *(p+i);
        }
    }
       return max_num;
}

int main()
{
    int size;
     printf("----------------- Largest Elements in Array -------------------\n\n");
    printf("\nEnter Array Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("\nEnter the elements of the array: ");  //Input array elements
     for(int i=0; i<size; i++)
    {
      scanf("%d", &arr[i]);
    }

      printf("\nThe largest element in the array is: %d\n", max(arr, size));

  return 0;
}

