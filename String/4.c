#include<stdio.h>
#include<string.h>
int main()
{
    char ch,s1[100],s2[100];
    int i,length1,w,s,c;
    w=s=c=0;
    printf("Enter string: ");
    gets(s1);
    length1=strlen(s1);
   for(i=0;i<length1;i++)
   {
       ch=s1[i];
     if(ch>=65 && ch<=90)
      {
       c++;
      }
       else if(ch>=97 && ch<=122)
       {
        s++;
       }
       else
        w++;
   }
    if(length1>=6 && c>0 && w>0 && s>0)
         printf("Valid password");
    else
        printf("Invalid password ");
    return 0;
}
