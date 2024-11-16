#include<stdio.h>

int main()
{
    int arr[100], n, k, num;

    printf("              <<<<<<<<<<  Adding Elements in Kth index in an Array  >>>>>>>>>>>\n\n");
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements of your array: ", n);
       for(int i=0; i<n; i++)   //loop for array elements
       {
         scanf("%d", &arr[i]); //input elements
       }

    printf("\nInsert element in kth index(position): ");
    scanf("%d", &k);  //select desired index

    printf("\nEnter an integer number: ");
    scanf("%d", &num);   //input value in desired index

    for(int i=n-1; i >= k-1; i--) //loop updating
    {
      arr[i+1] = arr[i];
    }
       arr[k-1] = num;

    printf("\nUpdated Array is: ");
       for(int i=0; i<=n; i++)  //loop for update array
       {
         printf("%d ", arr[i]);
       }

    printf("\n\n");

 return 0;

}
