#include<stdio.h>
int main()
{
    int r;
    float area, peri;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    area = 3.1416*r*r;
    peri = 2*3.1416*r;

    printf("The area of the circle is: %.2f\n", area);
    printf("The perimeter of the circle is: %.2f", peri);

  return 0;
}
