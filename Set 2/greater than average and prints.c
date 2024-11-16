#include<stdio.h>

int main()
{
    int n;
    float sum=0.0, avg;

    printf("              <<<<<<<<<<<<<<<< Array with Average and Return Elements More than Average >>>>>>>>>>>>>>\n\n");
    printf("\nEnter array size: ");
    scanf("%d", &n);

    float arr[n]; //array declare

    printf("\nEnter elements: "); //input elements
        for(int i=0; i<n; i++)
       {
          scanf("%f", &arr[i]);
          sum = sum+arr[i];  //Sum of the elements
       }

         avg = sum/n;  // average sum

    printf("\nAverage of the array elements is: %f\n", avg); //Average print

    //Print elements greater than the average
    printf("\nThe elements greater than average are: ");

         for(int i=0; i<n; i++)
        {
               if(arr[i] > avg)
             {
                printf("%.0f ", arr[i]);  //print more than average
             }
        }

    printf("\n\n");

    return 0;
}

