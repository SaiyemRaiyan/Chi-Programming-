#include<stdio.h>
#include<string.h>
main()
{
    char s[200];
    int i,N;
    printf("Enter the string:");
    gets(s);
    printf("\n\n");
       N=strlen(s);

    for(i=0; i<N; i++)
    {
        if(s[i]!=32 && s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U')
       {


             printf("First consonent in the sentence is: %c \n\n",s[i]);
              break;
       }
    }
          printf("The vowels are in this sentence: ",s[i]);

      for(i=0; i<N; i++)
   {
     if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
    {

         printf("%c ",s[i]);
    }
   }
   return 0;
   getch();
}
