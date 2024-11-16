#include<stdio.h>
int main(){
int i,c,n;
char s[1000];
printf("Enter String: ");
gets(s);
n=strlen(s);
for(i=0;i<n;i++)
{
    printf("%d ",s[i]);
}
}
