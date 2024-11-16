#include<stdio.h>

int main()
{
    int n, count=1, rem;

     printf("<<<<<<<<<< Armstrong Number between 1 to 500 >>>>>>>>>>\n\n");
     // loop for 1 to 500
     while(count <= 500)
     {
        n = count;
        int sum=0;

    //Calculate the sum of cubes of digits of numbers
        while(n)
        {
            rem = n%10;  //To get the last digit
            sum = sum+(rem*rem*rem); //add cube of digits
              n = n/10; //remove the last digit from number
        }
           //check whether original number = sum
           if(count == sum)
          {
            printf("%d is a Armstrong Number\n", count);
          }

            count++; //counter increment
     }

  return 0;
}
