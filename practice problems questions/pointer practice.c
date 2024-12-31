#include<stdio.h>
int main()
{
    int a=10,b=25,*p1=&a,*p2=&b;
char str[20]="freedom";

   *p1=b+a;
  printf("%d %d %d %d",a,b,*p1,*p2);
     p2=p1;
   printf("\n%d %d %d %d",a,b,*p1,*p2);
    *p2=b-a;
  printf("\n%d %d %d %d",a,b,p1,p2);
     p1=str;
   printf("\n%s %c %s",p1,str[4],str);
}
