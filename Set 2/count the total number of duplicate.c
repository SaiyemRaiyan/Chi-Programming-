#include<stdio.h>

int main()
{
    int arr[100],i,j,n,count=0;

    printf("               Duplicate Elements of an Array\n");
    printf("           --------------------------------------\n\n");

    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements: "); //input elements
    for(i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }

    //checking duplicates elements
    printf("\nDuplicated number of elements in the array are: ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
              count = count+1;
              break;
            }
        }
    }
       printf("%d", count);

    printf("\n\n");

  return 0;
}
