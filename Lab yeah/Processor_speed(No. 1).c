#include<stdio.h>
typedef struct{
    char model[100];
    float processor;
    float ram;
    float harddisk;
    double price;

} pc;

int processorSpeed(pc a[],int n)
{
    int i,p=0;
      for(i=0; i<n; i++)
      {
          if(a[i].processor>=2.4)
              p++;
      }
      return p;
}

double cheapest(pc t[],int n)
{
    int i;
    double c=t[0].price;
    for(i=0; i<n; i++)
    {
        if(c>t[i].price)
            c=t[i].price;
    }
    return c;
}

main()
{
    int N,p,i;
    double c;
    printf("Enter the number of the computers:");
    scanf("%d",&N);
    printf("\n\n");

    pc m[N];
    for(i=0; i<N; i++)
    {
        printf("<<<<<<<<<<<<  PC INFORMATION  >>>>>>>>>>>>");
        printf("\n\n");
        fflush(stdin);
        printf("Enter the model number of pc:");
        gets(m[i].model);
        printf("Enter the speed of the processor:");
        scanf("%f",&m[i].processor);
        printf("Enter the ram size of pc:");
        scanf("%f",&m[i].ram);
        printf("Enter the size of the hard disk:");
        scanf("%f",&m[i].harddisk);
        printf("Enter the price:");
        scanf("%lf",&m[i].price);
        printf("\n");


    }
    p=processorSpeed(m,N);
    printf("The Number of models having a processor speed of at least 2.4 GHz:%d\n",p);

    c=cheapest(m,N);
    printf("Cheapest model price:%.3lf",c);
    
    return 0;
    getch();
}

