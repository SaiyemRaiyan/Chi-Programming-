
/*Pointer variable stores address.
Direct way of access a memory location - use the variable name
Indirect way of accessing a memory location- use pointer.*/
/*
#include<stdio.h>
int main()
{
    int a=5;
    int *pa;
    pa=&a;
    printf("The value in a=%d\n", a);
    printf("The value in a=%d\n", *pa);
    printf("The address of a=%d\n", &a);
    printf("The address of a stored in pointer=%d\n", pa);
    printf("The value in pa=%d\n", pa);
    printf("The address of pa=%d\n", &pa);
    *pa=10;
    printf("The value in a=%d\n", a);
    printf("The value in a accessed using pointer =%d\n", *pa);


}
*/


/*
#include<stdio.h>
int main()
{
    int a,b,c;
    int *pa,*pb,*pc;

    /*int* pa;
    int* pb;
    int* pc;*/
   /* pa=&a,pb=&b,pc=&c;
    printf("Enter values of a and b: ");
    scanf("%d%d", pa,pb);
    *pc=*pa+*pb;
    printf("\n The sum is %d", *pc);
}
*/


//Funtions and Pointer
// Functions can have pointers as there formal parameter
/*
#include <stdio.h>
void compute_diameter(float);

int main()
 {
 float radius;
 printf("\n enter the radius of the circle:");
 scanf("%f",&radius);

 compute_diameter(radius);
 return 0;
 }

void compute_diameter(float x)
 {
 float diameter;
 diameter=2*x;
 printf("\n Diameter= %.2f", diameter);
 }

*/
/*
#include <stdio.h>
void compute_diameter(float *);

int main()
 {
 float r;
 printf("\n enter the radius of the circle:");
 scanf("%f",&r);

 compute_diameter(&r);
 return 0;
 }

void compute_diameter(float *r)
 {
 float d;
 d=2*(*r);
 printf("\n Radius =%.2f, Diameter= %.2f", *r, d);
 }
*/


/*
#include <stdio.h>
void swap(int,int);

int main()
{
 int x=5,y=10;
 printf(" before call  x=%d, y=%d\n",x,y);
 swap(x,y);
 printf("After call x=%d, y=%d\n",x,y);
 return 0;
}

void swap(int a, int b)
{
 int temp;
 temp=a;
 a=b;
 b=temp;
}*/


/*
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x, y;

    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);

    printf("Before Swapping\nx = %d\ny = %d\n", x, y);

    swap(&x, &y);

    printf("After Swapping\nx = %d\ny = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *b; //temp=10
    *b = *a;   //   y  =5
    *a = temp;  //  x=10
}*/



/*
#include <stdio.h>
float compute(float, float, float *,  float *);

int main()
 {
 float area, perimeter,diagonal;
 float w,h;
 printf("\n enter the width of the rectangle:");
 scanf("%f",&w);
 printf("\n enter the height of the rectangle:");
 scanf("%f",&h);

 area=compute(w, h, &perimeter, &diagonal);
 printf("\n AREA = %.2f", area);
 printf("\n PERIMETER = %.2f", perimeter);
 printf("\n DIAGONAL = %.2f", diagonal);
 return 0;
 }

float compute(float w, float h, float *p, float *d)
 {
 float a;
 a=w*h;
 *p=((2 * w)+(2 * h));
 *d=sqrt(h*h + w*w);
 return a;
 }


//Funtions can return pointer
/*
#include <stdio.h>
int *pointMax(int *, int *);
int main(void)
{
 int a,b,*p;
 printf("\n a = ");
 scanf("%d",&a);
 printf("\n b = ");
 scanf("%d",&b);
 p=pointMax(&a,&b);
 printf("\n a = %d", &a);
 printf("\n b = %d", &b);


 printf("\n p = %d", p);
 printf("\n*p  = %d", *p);
 return 0;
}

int *pointMax(int *x, int *y)
{
 if(*x>*y)
 {
 printf ("Address in x is %d\n", x);
 return x;}
 else
 {
 printf ("Address in y is %d\n", y);
 return y;}
}*/


/*

#include<stdio.h>
int* getRandom();
int main () {
int *p;
p = getRandom();
printf("address of j is %d\n",p);
printf("value at *p : %d\n", *p );
return 0;
}
int* getRandom( ) {
  static int j; // need to declare var as static as it is not passed from other function
j=rand()%10;
printf("value of j: %d\n",j);
printf("Address of j: %d\n", &j);
return &j;
}



/*
//pointer and array elements.
#include <stdio.h>
int modify_elem(int, int *, int *);
//void modify_elem(int, int *, int *);
 int main()
 {
 int a[]={10, 20, 30, 40, 50},i;
     printf("The original array elements \n");
        for(i=0;i<5;++i)
             printf("a[%d]=%d\n", i, a[i]);

	  a[0]=modify_elem(a[0], &a[2], &a[4]);

	  //modify_elem(a[0], &a[2], &a[4]);
      printf("The modified array elements \n");
      for(i=0;i<5;++i)
         printf("a[%d]=%d\n", i, a[i]);

      return 0;
  }

//void modify_elem(int r, int *ptr1, int *ptr2){

int modify_elem(int r, int *ptr1, int *ptr2){
	int z;
	z=r+1;
	*ptr1=199;
	*ptr2=799;
	//printf("The modified value  of r is %d", z);
	return z;
}*/





/*
//pointer and array
1) &a[0]==a;  2) &a[i]==(a+i)   3) a[i]==*(a+i)


#include <stdio.h>
 int main()
 {
 int a[]={10, 20, 30, 40, 50};
 int i;
 for(i=0;i<5;++i)
 //printf("\n%d", a[i]);
 //printf("\n%d", i[a]);
//printf("\n%d", *(a+i));
//printf("\n%d", *(i+a));

 return 0;
 }*/

/*
 #include <stdio.h>
 int main(void)
 {
 int a[] = {10, 12, 6, 7, 2};
 int i;
 int sum = 0;
 for(i=0; i<5; i++)
 {
 //sum += a[i];
 sum += *(a + i);
 }
 printf(“%d\n”, sum);
 return 0;
 } */

/*
 #include <stdio.h>
 int main(void)
 {
 int a[] = {10, 12, 6, 7, 2};
 int i;
 int sum = 0;
  int *p;
 p = a;
 for(i=0; i<5; i++)
 {
 sum += *p;
 p++;  }
 printf(“%d\n”, sum);
 return 0;
 } */
//p++ is p=p+1=p+1*4(for pointer to int)//for example, ptr is initialized to point
//to the float array element, arr[3]. ptr – 1 points
//to arr[2], and ptr + 1 points to arr[4].





/*
//Access Array Elements Using Pointers

#include <stdio.h>
int main() {
    int data[5], i;
    int *d1=data;
    printf("Enter elements: ");
    for (i = 0; i < 5; ++i)
        scanf("%d", data + i);
        //scanf("%d", &data [i]);

    /*printf("You entered: \n");
          for (i = 0; i < 5; ++i)
          printf("%d\n", *(data + i));
       // printf("%d\n", data[i]);*/

     /* printf("You entered: \n");
         for (i = 0; i < 5; ++i){
            printf("%d\n", *(d1));
              d1++;}*/

    /*
  printf("In reverse order: \n");
    for (i = 4; i >= 0; --i)
        printf("%d\n", *(data + i));*/
//
        //return 0;
//}*/

/*#include <stdio.h>
int main() {
    int a[5],b[5],c[5],i;
printf("Enter elements: ");
       for (i = 0; i < 5; ++i)
        scanf("%d", a+i);
        //scanf("%d", &a [i]);

        printf("Enter elements: ");
       for (i = 0; i < 5; ++i)
        scanf("%d", b + i);
        //scanf("%d", &b [i]);

       for (i = 0; i < 5; ++i)
        *(c+i)=*(a+i) * *(b+i);
        //c[i]=a[i]+b[i];

   printf("Sum array c[i]  ");
    for (i = 0; i < 5; ++i)
        printf("%d ", *(c + i));
        //printf("%d\n", c[i]);

    return 0;
}*/

/*
#include<stdio.h>
//void printNum(int  p[], int size);
//void printNum(int [], int );

void printNum(int *ptr, int len);
//void printNum(int *, int );

int main()
{
int a[4]={4,10,1,5};
printNum(a,4);
return 0;
}

//void printNum(int ptr[], int len)
void printNum(int *ptr,int len)
{
int i;
for(i=0; i <len ; i++ )
{
printf("*(ptr+%d) = %d \n",i,*(ptr+i),i);
//printf("ptr[%d]= %d \n",i, ptr[i]);
}
}*/


//pointer and structure

/*
#include <stdio.h>
typedef struct {
	char name[12];
	int  age;
	char gender;
} player_t;

void change_name_and_age(player_t);
void print_player(char [], player_t);

int main(void) {
	player_t player1 = { "Brusco", 23, 'M' };

	change_name_and_age(player1);
	print_player("player1", player1);
	return 0;
}

// To change a player’s name and age
void change_name_and_age(player_t player) {
	strcpy(player.name, "Alexandra");
	player.age = 25;
}

// Print player’s information
void print_player(char header[], player_t player) {
	printf("%s: name = %s; age = %d; gender = %c\n", header,
	       player.name, player.age, player.gender);}*/


/*
#include <stdio.h>
typedef struct {
	char name[12];
	int  age;
	char gender;
} player_t;

void change_name_and_age(player_t *);
void print_player(char [], player_t);

int main(void) {
	player_t player1 = { "Brusco", 23, 'M' };

	change_name_and_age(&player1);
	print_player("player1", player1);
	return 0;
}

/*
// To change a player’s name and age
void change_name_and_age(player_t *player_ptr) {
	strcpy((*player_ptr).name, "Alexandra");
	(*player_ptr).age = 25;*/


// To change a player’s name and age
/*
void change_name_and_age(player_t *player_ptr) {
	strcpy(player_ptr->name, "Alexandra");
	player_ptr->age = 25;
}



// Print player’s information
void print_player(char header[], player_t player) {
	printf("%s: name = %s; age = %d; gender = %c\n", header,
	       player.name, player.age, player.gender);
}
*/
