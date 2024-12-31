#include<stdio.h>

void changecase(char *s)
{
    while(*s != '\0')
    {
        if(*s >= 65 && *s <= 90)
        {
          *s = *s+32;  //Convert to lowercase
        }
         else if (*s >= 97 && *s <= 122)
        {
           *s = *s-32;  //Convert to uppercase
        }
           s++; //Next character
    }
}

int main()
{
    char str[50];

    printf("--------------- Convert Uppercase <-> Lowercase ------------------\n\n");
      printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    changecase(str); //Function call

   printf("\nUpdated string is: %s\n", str);

 return 0;
}

