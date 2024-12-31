#include<stdio.h>

void toUpperCase(char *str)
{
    while(*str)
    {
        if(*str>='a' && *str<='z')
        {
            *str = *str - 32;
        }
          str++;
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);

   toUpperCase(str);

   printf("Uppercase: %s", str);

 return 0;
}
