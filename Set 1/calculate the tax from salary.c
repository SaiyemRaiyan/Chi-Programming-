#include <stdio.h>

int main()
{
    float salary, tax=0;

    printf("<<<<<<<<<<<< Salary according to tax >>>>>>>>>>>>>>>\n\n");
    printf("Enter salary: ");
    scanf("%f", &salary);

    // Tax calculation according to the salary range
                             //Formula
    // tax = (base tax) + (percentage of excess) *(salary – min. salary in the salary range)
    if(salary <= 14999.99)
    {
        tax = 0+(15.0/100.0)*salary;
    }
    else if(salary <= 29999.99)
    {
        tax = 2250+(18.0/100.0)*(salary-15000);
    }
    else if(salary <= 49999.99)
    {
        tax = 5400+(22.0/100.0)*(salary-30000);
    }
    else if (salary <= 79999.99)
    {
        tax = 11000+(27.0/100.0)*(salary-50000);
    }
    else if(salary <= 150000)
    {
        tax = 21600+(33.0/100.0)*(salary-80000);
    }

    printf("The tax is: %.3f\n", tax);  // Print tax

  return 0;
}




