#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0,k=0,a,minIdx=0,min=0;
    char strl[80]={0},substr[80][80]={0},c;
    printf("Enter a string: ");
    gets(strl);
    while(strl[k]!='\0')
    {
       j=0;
        while(strl[k]!=' ' && strl[k]!='\0')
        {
            substr[i][j]=strl[k];
            k++;
            j++;
        }
          substr[i][j]='\0';
          i++;
          if(strl[k]!='\0')
        {
            k++;
        }
    }
    int len=i;
    min=strlen(substr[0]);
    for(i=0;i<len;i++)
    {
        a=strlen(substr[i]);
        if(a<min)
        {
            min=a;
            minIdx=i;
        }
    }
    printf("Smallest word: %s\n",substr[minIdx]);
    return 0;
    getch();
}
