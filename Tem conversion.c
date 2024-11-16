#include<stdio.h>
int main()
{
    int choice;
    float temp, convertTemp;

    printf("<<<<<<<<< Temperature conversion menu >>>>>>>>>\n\n");
    printf("1. Celcius to Farenheit\n");
    printf("2. Farenheit to Celcius\n\n");

    printf("Enter your choice:");
    scanf("%d", &choice);

    switch(choice)
  {

    case 1:
        {
            printf("Enter the Farenheit Temperature: ");
            scanf("%f", &temp);
            convertTemp = (temp-32)/1.8;
            printf("The Celcius Temperature is: %f\n", convertTemp);
            break;
        }

    case 2:
        {
            printf("Enter the Celcius Temperature: ");
            scanf("%f", &temp);
            convertTemp = (1.8*temp)+32;
            printf("The Farenheit Temperature is: %f\n", convertTemp);
            break;
        }
    default:
        printf("Invalid input");
    }

 return 0;
}
