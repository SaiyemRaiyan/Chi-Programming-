#include<stdio.h>
int main()
{
    char str[500];
    int i, j;

    printf("                 Removing Non Alphabetical Characters in a String\n");
    printf("               ------------------------------------------------------\n\n");
    printf("Enter a string: "); //Input string
    gets(str);

     //Iteration each character and remove the non alphabetical characters
    for(i=0; str[i] != '\0'; i++)
    {
        while(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
        {
            for(j=i; str[j] != '\0'; j++)  //loop for removing
            {
              str[j] = str[j+1];
            }

              str[j] = '\0';
        }
    }

    printf("\nCharacters in the string are: ");
    puts(str);

    printf("\n\n");

  return 0;
}
