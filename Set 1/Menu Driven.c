#include<stdio.h>

//Function prototypes
int findLCM(int, int);
int findGCD(int, int);
int findPerfect(int);
void checkMultiple();
void findFactors();
int findFactorial(int);


//Calculate GCD
int findGCD(int num1, int num2)
{
    int n1, n2, rem;

         n1 = num1;
         n2 = num2;

    while(n2 != 0)
    {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}

//Calculate LCM using the GCD result
int findLCM(int num1, int num2)
{
    int gcd;
    gcd = findGCD(num1, num2);
    return (num1*num2) / gcd;
}

// Function to check if a number is a perfect number
int findPerfect(int num)
{
    int sum=0, i=1;
    while(i <= num/2)
    {
        if(num%i == 0)
            sum = sum+i;
        i++;
    }

    return sum == num;
}

//If a number is a multiple of another
void checkMultiple()
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    if(y != 0 && x%y == 0)
    {
      printf("%d is a multiple of %d\n", x, y);
    }
    else
    {
      printf("%d is not a multiple of %d\n", x, y);
    }
}

//Factors of a number
void findFactors()
{
    int num, i=1;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    while(i <= num)
    {
       if(num%i == 0)
            printf("%d ", i);
       i++;
    }
    printf("\n");
}

//Calculate factorial of a number
int findFactorial(int num)
{
    int result=1, i=1;

    while(i <= num)
    {
        result = result*i;
      i++;
    }
    return result;
}

int main()
{
    int select=0;
        printf("            Find and Test\n");
        printf("         -------------------\n\n");

    while(select != 7)
    {
        printf("\nMenu:\n\n");
        printf("1. LCM of 2 integers\n");
        printf("2. GCD of 2 integers\n");
        printf("3. Perfect number\n");
        printf("4. If a number is a multiple of another\n");
        printf("5. Factors of a number\n");
        printf("6. Factorial of a number\n");
        printf("7. Exit\n\n");
        printf("Select your choice: ");
        scanf("%d", &select);
                        //Using switch case
        switch(select)
        {
            case 1:
            {
                int num1, num2;

                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);

                printf("LCM of %d and %d is %d\n", num1, num2, findLCM(num1, num2));
                break;
            }

            case 2:
            {
                int num1, num2;

                printf("Enter two integers: ");
                scanf("%d %d", &num1, &num2);

                printf("GCD of %d and %d is %d\n", num1, num2, findGCD(num1, num2));
                break;
            }

            case 3:
            {
                int num;

                printf("Enter a number: ");
                scanf("%d", &num);

                if(findPerfect(num))
                {
                    printf("%d is a perfect number.\n", num);
                }
                else
                {
                    printf("%d is not a perfect number.\n", num);
                }
                break;
            }

            case 4:
            {
                checkMultiple();
                break;
            }

            case 5:
            {
                findFactors();
                break;
            }

            case 6:
            {
                int num;

                printf("Enter a number: ");
                scanf("%d", &num);

                printf("Factorial of %d is %d\n", num, findFactorial(num));
                break;
            }

            case 7:
                printf("Exit\n");
                break;

            default:
                printf("Invalid selection. Select again.\n");
        }
    }

  return 0;
}
