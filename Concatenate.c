#include<stdio.h>
#include <string.h>
 int main()
{
    char s1[100],s2[100];
    int i,j;

    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    j=strlen(s1);
    s1[j]=32;

    for(i=0;s2[i]!='\0';i++)
    {
    	s1[i+j+1]=s2[i];
	}
	s1[i+j+1]='\0';

    printf("Combined two strings= %s",s1);
    return 0;
    getch();
}

