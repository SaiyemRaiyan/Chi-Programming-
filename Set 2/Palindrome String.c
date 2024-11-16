#include<stdio.h>

int main()
{
    char s[100], t[100];
    int n=0, i, j, c=0;

    printf("                 PALINDROME of a String\n");
    printf("               ----------------------------\n\n");
    printf("Enter a string: ");  //Input String 1
    scanf(" %[^\n]", s);

    // Calculate the length of the string
    while(s[n] != '\0')
    {
      n++;
    }

      //Reverse the string and store it in t
       i=0;
       j = n-1;

    while(j >= 0)
    {
      t[i] = s[j];
      i++;
      j--;
    }
       t[i] = '\0';  //Remove NULL to reverse

    //Compare original and reversed strings
    for(i=0; i<n; i++)
    {
        if(s[i] == t[i])
        {
          c++;
        }
    }

        //Check if all characters match
    if(c == n)
    {
        printf("Palindrome\n");
    }
     else
    {
        printf("Not Palindrome\n");
    }
       printf("\n\n");

  return 0;
}

