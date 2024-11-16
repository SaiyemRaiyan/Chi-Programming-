 #include<stdio.h>
 #include<string.h>
 int main()
 {
   char t[100];
   int a,i;
   gets(t);
   a=strlen(t);
   for(i=0;i<a;i++)
   {
       if(t[i]>='a' && t[i]<='z')
       t[i]=t[i]-32;
       else if(t[i]>='A' && t[i]<="Z");
        t[i]=t[i]+32;

   }
   printf("%s",t);
   return 0;
 }
