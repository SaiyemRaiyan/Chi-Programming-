#include<stdio.h>

void swap(int *add1, int *add2)
{
    int temp;

    temp = *add1;
    *add1 = *add2;
    *add2 = temp;
}

int main()
{
    int x = 5, y = 10;
    printf("Before swapping: x = %d  y = %d\n", x,y);
    swap(&x, &y);

    printf("After swapping: x = %d  y = %d\n", x,y);
  return 0;\

}
