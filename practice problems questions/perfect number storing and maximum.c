#include<stdio.h>

int ckperfect(int num)
{
    int sum=0;
    for(int i=1; i <= num/2; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }
    if(sum == num)
    {
        return 1; // Number is perfect
    }
    return 0; // Number is not perfect
}

int main()
{
    int arr[100], perfectArr[100];
    int size, perfectCount=0, maxPerfect=0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for(int i=0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find perfect numbers
    for(int i=0; i < size; i++)
    {
        if(ckperfect(arr[i]))
        {
            perfectArr[perfectCount] = arr[i];
            if(arr[i] > maxPerfect)
            {
              maxPerfect = arr[i];
            }
            perfectCount++;
        }
    }

    // Print the results
    if(perfectCount > 0)
    {
        printf("\nPerfect numbers in the array:\n");
        for(int i=0; i < perfectCount; i++)
        {
            printf("%d ", perfectArr[i]);
        }
        printf("\nMaximum perfect number: %d\n", maxPerfect);
    }
    else
    {
        printf("\nNo perfect numbers found in the array.\n");
    }

    return 0;
}

