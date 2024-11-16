#include<stdio.h>
#define row 5
#define col 4

int main()
{
    int a[row][col]={{78,83,82,54};
                {81,80,23,14};
                {11,20,31,11};
                {56,79,31,90};
                {32,45,56,87}};
 int i,j;
 for(i=0;i<row;i++)
 {
     for(j=0;j<col;j++)
     {
         printf("%d",a[i][j]);
     }
     printf("/n");

 }
 return 0;
}




