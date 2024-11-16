#include<stdio.h>

void printCircle(int *radius)
{
    float A,C;
    float pi=3.1416;
    int r=*radius;
    A=pi*(r*r);
    printf("Area: %f\n", A);
    C=2*pi*r;
    printf("Circumference: %f",C);
}

int main()
{
    int radius;
    printf("Radius: ");
    scanf("%d",&radius);
    printCircle(&radius);
    return 0;
}
