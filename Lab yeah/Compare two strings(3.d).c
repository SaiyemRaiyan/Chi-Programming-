#include<stdio.h>
#include<string.h>
 main()
{
   char s1[100],s2[100];

   printf("Enter a string:\n");
   gets(s1);

   printf("Enter a string:\n");
   gets(s2);

   if(strcmp(s1,s2) == 0)
      printf("\nYes.");
   else
      printf("\nNo.");

   return 0;
}
