#include<stdio.h>
void swapNumbers(int*x,int*y,int*z);
int main()
 {
    int x,y,z;

    printf("Input the value of 1st element: ");
    scanf("%d",&x);
    printf("Input the value of 2nd element:");
    scanf("%d",&y);
    printf("Input the value of 3rd element:");
    scanf("%d",&z);

    printf(" The values before swapping are:\n");
    printf(" 1st Element: x=%d\n 2nd Element: y=%d \n 3rd Element: z=%d\n", x,y,z);

    swapNumbers(&x,&y,&z);

    printf("The value after swapping are:\n");
    printf(" 1st Element: x=%d\n 2nd Element: y=%d\n 3rd Element: z=%d", x,y,z);

    return 0;
}

void swapNumbers(int*n1,int*n2,int*n3)
 {
    int t;

     t=*n2;
    *n2=*n1;
    *n1=*n3;
    *n3=t;
}
