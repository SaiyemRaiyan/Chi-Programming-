#include<stdio.h>

int main()
{
    char A[100], B[50];
    int i, j;

    printf("                 Concatenation of String\n");
    printf("               ----------------------------\n\n");

    printf("\nEnter string 1: ");  //Input String 1
    scanf(" %[^\n]", A);

    printf("\nEnter string 2: ");  //Input string 2
    scanf(" %[^\n]", B);

    for(j=0; A[j] != '\0'; j++);  //Length of string A

       for(i=0; B[i] != '\0'; i++)  //Append string B to string A
      {
        A[j+i] = B[i];
      }

         A[j+i] = '\0'; //Remove NULL to concatenated string

    printf("\nAfter joining, first string is: %s\n", A);

  printf("\n\n");

 return 0;
}
