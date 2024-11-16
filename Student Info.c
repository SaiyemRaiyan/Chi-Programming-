#include<stdio.h>

typedef struct
{
    char gender[100];
    int id;
    float ct;
    float mt;
    float ft;
    float total;
}
student;

   int fail(student s[],int n)
   {
       int i,f;
       f=0;
       for(i=0;i<n;i++)
       {
           if(s[i].total<60)
            f++;
       }
       return f;
   }

   int highest(student s[],int n)
   {
       int i,h,m;
       h=s[0].total;
       m=s[0].id;
       for(i=0;i<n;i++)
       {
           if(h<s[i].total)
           {
               m=s[i].id;
               h=s[i].total;
           }
       }
       return m;
   }

   main()
   {
       int h,n,m,i;
       char a[10];
    printf("Enter the number of students:\n");
       scanf("%d",&n);
       student s[n];
       for(i=0; i<n; i++)
    {
        printf("ID:\n");
           scanf("%d", &s[i].id);
           scanf("%*c");
        printf("Gender:\n");
           gets(s[i].gender);
        printf("Class test mark:\n");
           scanf("%f", &s[i].ct);
        printf("Mid term mark:\n");
           scanf("%f", &s[i].mt);

        printf("Final test mark:\n");
           scanf("%f", &s[i].ft);

       s[i].total=s[i].ct+s[i].mt+s[i].ft;

       printf("Total Marks:%f\n",s[i].total);
    }
       m=fail(s,n);
    printf("The number of students who have failed:%d\n",m);
       h=highest(s,n);
    printf("The ID of students who obatained the highest:%d\n",h);

    return 0;
    getch();

   }
