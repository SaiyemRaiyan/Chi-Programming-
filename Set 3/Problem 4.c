#include<stdio.h>

        //Compare two strings
int compare(char *str1, char *str2)
{
    int i=0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] > str2[i])
        {
          return 1; //str1 is greater
        }
          if (str1[i] < str2[i])
         {
           return -1; //str2 is greater
         }
            i++;
    }

            //Compare lengths
     if(str1[i] != '\0')
    {
      return 1;
    }
     if(str2[i] != '\0')
    {
      return -1; //str2 is longer
    }

      return 0; //Strings are equal
}

int main()
{
    char str1[50], str2[50];
    int res;

    printf("<<<<<<<<<<<<< String Comparison >>>>>>>>>>>>>>>>\n\n");
    printf("\nEnter str1: ");
    gets(str1);

    printf("\nEnter str2: ");
    gets(str2);

         res = compare(str1, str2);

    printf("%d\n", res);

  return 0;
}
