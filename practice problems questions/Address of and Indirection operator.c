#include<stdio.h>
main()
{
    int a=10, b=0;
    int *p, *q;

    p = &a;
    q = &b;

    printf("Value of a = %d\n", a);
    printf("Value of a = %d\n", *p);
    printf("Address of a = %d\n", &a);
    printf("Address of a = %d\n\n", p);


    printf("Value of b = %d\n", b);
    printf("Value of b = %d\n", *q);
    printf("Address of b = %d\n", &b);
    printf("Address of b = %d", q);
}
