#include<stdio.h>
main()
{
  char str1[1000],str2[1000];
  int len1,len2;
  gets(str1);
  gets(str2);
  len1=strlen(str1);
  len2=strlen(str2);
  if(len1>len2)
    puts(str2);
  else
    puts(str1);
}
