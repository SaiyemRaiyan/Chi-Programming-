#include<stdio.h>
#include<string.h>
main(){
    char s[80],t[80];
    int n,i,j,c;
    gets(s);
    n=strlen(s);
    i=0;
    j=n-1;
    c=0;
    while(j>=0)
    {
        t[i]=s[j];
        i++;
        j--;

    }
    for(i=0;i<n;i++)
    {
        if(s[i]=t[i])
            c++;
    }
    if(c==n)
        printf("Palindrome");
        else
         printf("Not Palindrome");
}
