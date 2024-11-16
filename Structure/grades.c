#include<stdio.h>
typedef struct {

float m;
char g;

} student;

char findGrade(student p){

char g;

if(p.m >= 90)	        g = 'A';
else if (p.m>= 80)	g = 'B';
else if (p.m>= 70)	g = 'C';
else if (p.m>= 60)	g = 'D';
else g = 'F';
return g;
}


main()

{

student s;

printf("Enter Mark: ");
scanf("%f",&s.m);

s.g = findGrade(s);

printf("%f Marks:Grade: %c",s.m,s.g);

}
