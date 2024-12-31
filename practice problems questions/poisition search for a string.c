#include<stdio.h>
#include<string.h>

int main()
{
    char s[80], t;
    int i,p;

    printf("Enter a sentence");
    gets(s);

    printf("Which Letter?");
    scanf("%c", &t);
    p=0;
    for(i=0; i<strlen(s); i++)
    {
        if(t == s[i])
        {
          p++;
        }
    }
    if(p==0)
        printf("Not found");
    else
        printf("Found %d times", p);
}
