#include<stdio.h>

void count(char arr[])
{
    int vowels=0, consonants=0;

    for(int i=0; arr[i] != '\0'; i++)
    {
        char ch = arr[i];

        // Check if the character is a vowel
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        // Check if the character is a consonant (alphabet but not a vowel)
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

int main()
{
    char str[100];

    printf("Enter string: ");
    gets(str);

    count(str);

  return 0;
}

