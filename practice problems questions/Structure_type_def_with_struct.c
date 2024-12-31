//Declaring Structure Variables Separately
/* #include<stdio.h>
struct student
{
  char name[100];
  int id;
  int age;
  float cgpa;
};

int main()
{
 struct student s;
//variable declaration and initialization together
//struct student s={ "Tom", 12,17,3.5};

//Using .dot operator to access structure variable members/components
strcpy(s.name, "Tom");
  s.id = 12;
  s.age = 17;
  s.cgpa = 3.5;
// Taking input from user and access member using dot operator
//gets(s.name);
//scanf("%d%d%f", &s.id,&s.age,&s.cgpa);

  printf("Name = %s, Id = %d,  Age = %d,  Cgpa = %.2f", s.name, s.id, s.age, s.cgpa);
}

}*/




//Declaring Structure Variables with Structure Definition

/* #include<stdio.h>
struct student
{
  char name[100];
  int id;
  int age;
  float cgpa;
}s;

int main()
{
  strcpy(s.name, "Tom");
  s.id = 12;
  s.age = 17;
  s.cgpa = 3.5;
 printf("Name = %s, Id = %d,  Age = %d,  Cgpa = %.2f", s.name, s.id, s.age, s.cgpa);
}

*/



//Structure as function argument
#include<stdio.h>
struct student
{
  char name[100];
  int id;
  int age;
  float cgpa;
};

void prinfo(struct student);

int main()
{
	struct student stu;
	gets(stu.name);
    scanf("%d%d%f", &stu.id,&stu.age,&stu.cgpa);
    prinfo(stu);

}
void prinfo(struct student z)
{
	printf("Name=%s, Id=%d,  Age=%d,  Cgpa=%f", z.name,z.id,z.age,z.cgpa);
}





/*
//Retrun type as Structure type (so that you may return structure variable from function )
#include<stdio.h>
struct student {
char name[100];
int id;
int age;
float cgpa;
};

struct student scaninfo();

int main()
{
	struct student z;
    z=scaninfo();
    printf("Name=%s, Id=%d,  Age=%d,  Cgpa=%f", z.name,z.id,z.age,z.cgpa);

}
struct student scaninfo( )
{
	struct student stu;
	gets(stu.name);
    scanf("%d%d%f", &stu.id,&stu.age,&stu.cgpa);
    return stu;
}
*/
/*
//Rectangle example: argument rect structure type, return type is rect structure type
#include<stdio.h>
struct rect
{   int w;
	int h;
	char color[20];
};

struct rect getmin(struct rect, struct rect);
int main()
{
	struct rect R1={ 3,4,"green"};
	struct rect R2={ 5,6,"red"};
	struct rect R3;
	R3=getmin(R1,R2);
	printf("The color of smallest rectangle is %s", R3.color);


}
struct rect getmin(struct rect x, struct rect y)
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
struct student
{
 char name[50];
 int id;
 float cgpa;
};
int main()
{
 int i;
 struct student stList[2];
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
struct student
{
 char name[50];
 int id;
 float cgpa;
};
void scaninfo(struct student s[], int size);
void prinfo(struct student s[], int size);
int main()
{
 int n;
 struct student stList[100];
 printf("Enter the number of students:");
 scanf("%d", &n);
 getchar();  //this is required to process the enter key you press, else you will not be able to enter the first name

   scaninfo(stList, n);
   prinfo(stList,n);

 return 0;
}

void scaninfo(struct student data[], int s)
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

void prinfo(struct student data1[], int s1)
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
struct student
{
 char name[50];
 int id;
 float cgpa;
};
struct student stList[100];
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


