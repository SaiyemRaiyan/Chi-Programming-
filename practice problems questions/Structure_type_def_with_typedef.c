/*
// rename a struct without a tagname
#include<stdio.h>
typedef struct  {
char name[100];
int id;
int age;
float cgpa;
}student;

int main()
{
student s;
//variable declaration and initialization together
//struct student s={ "Tom", 12,17,3.5};

//Using .dot operator to access structure variable members/components
strcpy(s.name, "Tom");
s.id = 12;
s.age=17;
s.cgpa=3.5;
// Taking input from user and access member using dot operator
//gets(s.name);
//scanf("%d%d%f", &s.id,&s.age,&s.cgpa);

printf("Name=%s, Id=%d,  Age=%d,  Cgpa=%f", s.name,s.id,s.age,s.cgpa);
}
*/


/*
//rename a struct with a tagname
#include<stdio.h>
typedef struct stu{
char name[100];
int id;
int age;
float cgpa;
}student;

int main()
{
 student s;
//variable declaration and initialization together
//struct student s={ "Tom", 12,17,3.5};

//Using .dot operator to access structure variable members/components
strcpy(s.name, "Tom");
s.id = 12;
s.age=17;
s.cgpa=3.5;
// Taking input from user and access member using dot operator
//gets(s.name);
//scanf("%d%d%f", &s.id,&s.age,&s.cgpa);

printf("Name=%s, Id=%d,  Age=%d,  Cgpa=%f", s.name,s.id,s.age,s.cgpa);
}
*/




/*
//Structure as function argument
#include<stdio.h>
typedef struct  {
char name[100];
int id;
int age;
float cgpa;
}student;

void prinfo( student);

int main()
{
	student stu;
	gets(stu.name);
    scanf("%d%d%f", &stu.id,&stu.age,&stu.cgpa);
    prinfo(stu);

}
void prinfo(student z)
{
	printf("Name=%s, Id=%d,  Age=%d,  Cgpa=%f", z.name,z.id,z.age,z.cgpa);
}

*/


/*
//Retrun type as Structure type (so that you may return structure variable from function )
#include<stdio.h>
typedef struct  {
char name[100];
int id;
int age;
float cgpa;
} student;

 student scaninfo();

int main()
{
	student z;
    z=scaninfo();
    printf("Name=%s, Id=%d,  Age=%d,  Cgpa=%f", z.name,z.id,z.age,z.cgpa);

}
student scaninfo( )
{
	student stu;
	gets(stu.name);
    scanf("%d%d%f", &stu.id,&stu.age,&stu.cgpa);
    return stu;	
}
*/


/*
//Rectangle example: argument rect structure type, return type is rect structure type
#include<stdio.h>
typedef struct  
{   int w;
	int h;
	char color[20];
}rect;

rect getmin( rect,  rect);
int main()
{
	rect R1={ 3,4,"green"};
	rect R2={ 5,6,"red"};
    rect R3;
	R3=getmin(R1,R2);
	printf("The color of smallest rectangle is %s", R3.color);
	
	
}
rect getmin(rect x, rect y)
{
	if(x.w*x.h<y.w*y.h)
	return x;
	else
	return y;
}
*/

/*
//Array of structure
#include<stdio.h>
typedef struct
{
 char name[50];
 int id;
 float cgpa;
}student;

int main()
{
 int i;
 student stList[2];
 for(i=0; i<2; i++)
 {
 printf("Enter student %d name,id,cgpa:\n",i+1);
 gets(stList[i].name);
 scanf("%d",&stList[i].id);
 scanf("%f",&stList[i].cgpa);
 fflush(stdin);
 }
 for(i=0; i<2; i++)
 {
 printf("Print student %d name,id,cgpa:\n",i+1);
 printf("Name: %s\n", stList[i].name);
 printf("ID: %d\n", stList[i].id);
 printf("CGPA: %f\n", stList[i].cgpa);
 }
 return 0;
}
*/



/*
//Array of structure as function argument
#include<stdio.h>
typedef struct 
{
 char name[50];
 int id;
 float cgpa;
}student;
void scaninfo(student s[], int size);
void prinfo(student s[], int size);
int main()
{
 int n;
 student stList[100];
 printf("Enter the number of students:");
 scanf("%d", &n);
 getchar();  //this is required to process the enter key you press, else you will not be able to enter the first name
   
   scaninfo(stList, n);
   prinfo(stList,n);
  
 return 0;
}

void scaninfo(student data[], int s)
{        int i;
        for(i=0; i<s; i++)
 			{
              printf("Enter student %d name,id,cgpa:\n",i+1);
              gets(data[i].name);
              scanf("%d",&data[i].id);
              scanf("%f",&data[i].cgpa);
              fflush(stdin);
            }
}

void prinfo(student data1[], int s1)
{
	int i;
 for(i=0; i<s1; i++)
 {
 printf("Print student %d name,id,cgpa:\n",i+1);
 printf("Name: %s\n", data1[i].name);
 printf("ID: %d\n", data1[i].id);
 printf("CGPA: %f\n", data1[i].cgpa);
 }
}

*/




/*
//Array of structure as global variable, n as global variable too
#include<stdio.h>
typedef struct 
{
 char name[50];
 int id;
 float cgpa;
}student;
student stList[100];
int n;

void scaninfo();
void prinfo();

int main()
{
 printf("Enter the number of students:");
 scanf("%d", &n);
 getchar();  //this is required to process the enter key you press, else you will not be able to enter the first name
   
   scaninfo(stList, n);
   prinfo(stList,n);
  
 return 0;
}

void scaninfo()
{        int i;
        for(i=0; i<n; i++)
 			{
              printf("Enter student %d name,id,cgpa:\n",i+1);
              gets(stList[i].name);
              scanf("%d",&stList[i].id);
              scanf("%f",&stList[i].cgpa);
              fflush(stdin);
            }
}

void prinfo()
{
	int i;
 for(i=0; i<n; i++)
 {
 printf("Print student %d name,id,cgpa:\n",i+1);
 printf("Name: %s\n", stList[i].name);
 printf("ID: %d\n", stList[i].id);
 printf("CGPA: %f\n", stList[i].cgpa);
 }
}

*/


