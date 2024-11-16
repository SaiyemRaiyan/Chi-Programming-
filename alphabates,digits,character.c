#include<stdio.h>
#include<string.h>
 int main()
{
    char s[100];
    int i,a,d,c;


    printf("Enter a string: ");
    gets(s);
    a=0;
    d=0;
    c=0;
    for(i=0;s[i];i++)
    {
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122) )
          a++;
        else if(s[i]>=48 && s[i]<=57)
         d++;
        else
         c++;

 	}


    printf("Alphabets: %d\n",a);
    printf("Digits: %d\n",d);
    printf("Special Characters: %d",c);


    return 0;
}
