#include<stdio.h>
int main()
{
    int x = 30, y = 40, z= 50, sum;
    int *p1, *p2, *p3;

    p1 = &x;
    p2 = &y;
    p3 = &z;

    sum = *p1+ *p2 + *p3;

    printf("Sum is: %d", sum);
}
