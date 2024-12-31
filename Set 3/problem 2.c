#include<stdio.h>

        //Function using array
int findlength(char s[])
{
       int count=0;
     for(int i=0; s[i] != '\0'; i++) //count non-space characters
     {
        if (s[i] != ' ' && s[i] != '\n') //Exclude spaces and newline
        {
           count++;
        }
     }
  return count;
}

       //Function using pointer notation
int findlength1(char *s)
{
    int count=0;

     while(*s != '\0')   //count non-space characters
     {
        if(*s != ' ' && *s != '\n')
        {
          count++;
        }
           s++;
     }
  return count;
}

int main()
{
    char str[50];

    printf("<<<<<<<<<<<<<<<<<< Array Length >>>>>>>>>>>>>>>>>\n\n");
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("\nLength using array is: %d\n", findlength(str));
    printf("\nLength using pointer is: %d\n", findlength1(str));

  return 0;
}
