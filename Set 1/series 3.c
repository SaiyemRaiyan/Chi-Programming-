#include<stdio.h>
#include<math.h> //pow() function

int main()
{
    int n;
    double denominator, sum=1.0; //Start the sum with the first term 1

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    //Calculate the sum of the series up to n terms
    for(int i=2; i <= n; i++)
    {
        denominator = pow(i,2);
        sum = sum + (((pow((denominator*i),2)+i) / pow(denominator, i)));
    }

    // Print the result
    printf("The sum is: %.5lf\n", sum);

    return 0;
}



