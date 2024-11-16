#include<stdio.h>
typedef struct{
    char n[100];
    int age;
    int income;
    char gender;
  }
    movieStar;

   float highestSalary(movieStar s[],int n)
{
    int i,max=s[0].income;
      for (i=0; i<n; i++)
    {
      if (max<s[i].income)
        {

            max=s[i].income;

         }
    }
    return max;
}

int youngest(movieStar s[],int n)
{
        int i,low=s[0].age;
        for(i=0;i<n;i++)
        {
                if(low>s[i].age)
            {
                    low=s[i].age;
            }
        }
    return low;
}



main()
{
    int h,i,N,y;
    printf("Enter the number of movie stars: ");
    scanf("%d",&N);

    movieStar s[N];
    for(i=0;i<N;i++)
        {

            printf("Name:");
            scanf("%*c");
            gets(s[i].n);
            printf("Age:");
            scanf("%d",&s[i].age);
            printf("Annual Income:");
            scanf("%d",&s[i].income);
            printf("Gender:");
            scanf("%*c");
            scanf("%c",&s[i].gender);
        }

    h=highestSalary(s,N);
    printf("\nHighest annual earning is %d\n",h);

    y=youngest(s,N);
    printf("Youngest movie star's age is %d",y);


   return 0;
   getch();

}
