#include<stdio.h>

void Replace(char arr[], char oldChar, char newChar); //Function prototype

//Replace all occurrences of old Character with new Character in the string
void Replace(char arr[], char oldChar, char newChar)
{
    for(int i=0; arr[i] != '\0'; i++)
    {
        if(arr[i] == oldChar)
        {
          arr[i] = newChar;  // Replace the character
        }
    }
}

int main()
{
    char str[500];
    char oldChar, newChar;

    printf("                 Replacing Characters in String\n");
    printf("               -----------------------------------\n\n");

    printf("\nEnter a string: ");
    scanf(" %[^\n]", str);  //Read string until newline


    printf("\nEnter a character to replace: ");  //Input characters
    scanf(" %c", &oldChar);
    printf("\nEnter a new character: ");
    scanf(" %c", &newChar);

    Replace(str, oldChar, newChar);  //Replace oldChar with newChar


    printf("\nUpdated string is: %s\n", str);

    printf("\n\n");

  return 0;
}

