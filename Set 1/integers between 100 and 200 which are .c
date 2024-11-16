#include<stdio.h>

int main()
{
    int n=200; //Initialization

    printf("<<<<<<<<<<< Integers between 100 and 200 which are divisible by 8 in descending order >>>>>>>>>>>\n\n");

    //Check and print numbers divisible by 8 (100 to 200)
    while(n >= 100)  //condition
    {
        if(n%8 == 0)
        {
          printf("%d\n", n);
        }
           n--; //Decrement numbers
    }

  return 0;
}

