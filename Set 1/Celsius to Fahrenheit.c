#include<stdio.h>
int main()
{
    float C, F; //declare variable

    printf("<<<<<<<<< Celcius to Fareheit Conversion >>>>>>>>>> \n\n");

    printf("Enter the celsius value: ");
    scanf("%f", &C); //input the celcius value

    F = C*(9.0/5.0) + 32; //celcius to farenhit

    printf("The Farenheit Value is: %.3f", F); //print farenheit

  return 0;
}
