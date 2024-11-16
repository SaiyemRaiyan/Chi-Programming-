#include<stdio.h>
int main()
{
    int length,width,rec_area,rec_peri;

    printf("Enter Rectangle length and width: ");
    scanf("%d%d", &length, &width);

    rec_area = length * width;
    rec_peri = 2*(length+width);

    printf("Rectangle area is: %d\n", rec_area);
    printf("Rectangle perimeter is: %d", rec_peri);

}
