#include<stdio.h>
#include<string.h>

#define MAX_STUDENTS 100

                   //Structure for Student
    struct Student
  {
    int ID;
    char Name[100];
    int Age;
    char Gender[10];
    char ContactNumber[20];
    float CGPA;
    char Address[100];
  };


                       //Function prototypes
    void highCGPA(struct Student students[], int n);
    int insertNewStudent(struct Student students[], int n);
    int deleteStudentInfo(struct Student students[], int n, char name[]);
    void modifyInfo(struct Student students[], int n, int id);


                     //Students with CGPA > 3.5
void highCGPA(struct Student students[], int n)
{
    printf("\nStudents with CGPA > 3.5:\n");
    for(int i=0; i<n; i++)
    {
        if(students[i].CGPA > 3.5)
        {
            printf("Name: %s\n, ID: %d", students[i].Name, students[i].ID);
        }
    }
}

                  //Insert a new student
int insertNewStudent(struct Student students[], int n)
{
    if(n >= MAX_STUDENTS)
    {
       printf("Can't add more students. Maximum limit reached!\n");
       return n;
    }

    printf("<<<<<<<<<<< Enter the details for the new student>>>>>>>>>>\n\n");

    printf("ID: ");
    scanf("%d", &students[n].ID);
    getchar(); //Newline character

    printf("Name: ");
    gets(students[n].Name);

    printf("Age: ");
    scanf("%d", &students[n].Age);
    getchar();

    printf("Gender: ");
    gets(students[n].Gender);

    printf("Contact Number: ");
    gets(students[n].ContactNumber);

    printf("Address: ");
    gets(students[n].Address);

    printf("CGPA: ");
    scanf("%f", &students[n].CGPA);
    getchar();

    return n+1;
}

                 //Delete a student by name
int deleteStudentInfo(struct Student students[], int n, char name[])
{
    int found=0;
    for(int i=0; i<n; i++)
    {
        if(strcmp(students[i].Name, name) == 0)
        {
            found=1;
            for(int j=i; j<n-1; j++)
            {
              students[j] = students[j+1];
            }
                n--;

            printf("Student '%s' deleted successfully.\n", name);
            break;
        }
    }
    if(!found)
    {
        printf("Student with name '%s' not found.\n", name);
    }

  return n;
}

              //Modify contact number or address by ID
void modifyInfo(struct Student students[], int n, int id)
{
    int found=0;
    for(int i=0; i<n; i++)
    {
        if(students[i].ID == id)
        {
            found=1;
            printf("Enter new contact number: ");
            gets(students[i].ContactNumber);

            printf("Enter new address: ");
            gets(students[i].Address);

            printf("Student with ID %d modified successfully.\n", id);
            break;
        }
    }
         if(!found)
        {
          printf("Student with ID %d not found.\n", id);
        }
}


int main()
{
    struct Student students[MAX_STUDENTS];
    int n, choice, id;
    char name[50];

    printf("                          ---------------------------------------------------------------\n");
    printf("                            <<<<<<<<<<<<<<<<<  Student Information  >>>>>>>>>>>>>>>>>>>>\n");
    printf("                          ---------------------------------------------------------------\n\n");

    printf("Enter the number of students: ");
    scanf("%d", &n);
    getchar();

                             //Student details
    for(int i=0; i<n; i++)
    {
        printf("\n              Enter details for student %d\n", i+1);
        printf("        ------------------------------------------\n");

        printf("\nEnter Student ID: ");
        scanf("%d", &students[i].ID);
        getchar();
        printf("Student's Name: ");
        gets(students[i].Name);

        printf("Student's Age: ");
        scanf("%d", &students[i].Age);
        getchar();

        printf("Student's Gender: ");
        gets(students[i].Gender);

        printf("Student's Contact Number: ");
        gets(students[i].ContactNumber);

        printf("Student's Address: ");
        gets(students[i].Address);

        printf("Student's CGPA: ");
        scanf("%f", &students[i].CGPA);
        getchar();
    }

                   //Menu-driven operations
    do
      {
        printf("\nMenu:\n");
        printf("1. Display students with CGPA > 3.5\n");
        printf("2. Insert a new student\n");
        printf("3. Delete a student by name\n");
        printf("4. Modify student contact number or address by ID\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

            switch(choice)
          {
            case 1:
                highCGPA(students, n);
                break;

            case 2:
                n = insertNewStudent(students, n);
                break;

            case 3:
                printf("Enter the name of the student that information you want to delete: ");
                gets(name);
                n = deleteStudentInfo(students, n, name);
                break;

            case 4:
                printf("Enter the ID of the student to modify: ");
                scanf("%d", &id);
                getchar();

                  modifyInfo(students, n, id);
                  break;

            case 5:
                printf("Exit the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again!\n");
        }
    }
         while(choice != 5);

    printf("\n\n");

  return 0;
}
