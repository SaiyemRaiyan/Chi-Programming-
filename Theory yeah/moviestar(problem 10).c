#include<stdio.h>

typedef struct{
    char n[300];
    int age;
    double income;
    char gender;
  } movieStar;


   double highestSalary(movieStar a[],int n)
{
    int i;
    double top=a[0].income;
      for (i=0; i<n; i++)
    {
      if (top<a[i].income)
        {
            top=a[i].income;
         }
    }
    return top;
}


int youngest(movieStar a[],int n)
{
        int i,yng=a[0].age;
        for(i=0;i<n;i++)
        {
                if(yng>a[i].age)
            {
                    yng=a[i].age;
            }
        }
    return yng;
}


main()
{
    int i,N,y;
    double h;
    printf("Enter the number of movie stars: ");
    scanf("%d",&N);
    printf("\n\n");
    movieStar a[N];
    for(i=0;i<N;i++)
        {
            printf("<<<<<<<<<<<   INFORMATION OF MOVIESTAR   >>>>>>>>>");
            printf("\n\n");
              fflush(stdin);
            printf("Name:");
              gets(a[i].n);
              fflush(stdin);
            printf("Age:");
              scanf("%d",&a[i].age);
              fflush(stdin);
            printf("Annual Income:");
              scanf("%lf",&a[i].income);
              fflush(stdin);
            printf("Gender:");
              scanf("%c",&a[i].gender);
            printf("\n\n");
        }

    h=highestSalary(a,N);
    printf("\nHighest annual earning is %.3lf\n",h);

    y=youngest(a,N);
    printf("Youngest movie star's age is %d",y);

    getch();
}
