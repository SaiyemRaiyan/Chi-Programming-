#include<stdio.h>
#include<string.h>

int main()
{
    char str1[80], str2[80];

    printf("Enter a string: ");
    gets(str1);

    strcpy(str2, str1);
    strrev(str2);

    if(strcmpi(str1, str2)== 0)
    {
        printf("'%s' is Palindrome word");
    }
    else
    {
        printf("'%s' is not palindrome word ");
    }
}
