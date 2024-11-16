#include <stdio.h>

int main() {
    int accountNumber;
    float previousCreditLimit, currentBalance, newCreditLimit;

    // Loop for 10 customers
    for (int i = 0; i < 10; i++)
    {
        // Input customer information
        printf("Enter the account number for customer %d: ", i + 1);
        scanf("%d", &accountNumber);

        printf("Enter the previous credit limit for customer %d: ", i + 1);
        scanf("%f", &previousCreditLimit);

        printf("Enter the current balance for customer %d: ", i + 1);
        scanf("%f", &currentBalance);

        // Calculate new credit limit
        newCreditLimit = previousCreditLimit / 4;

        // Display results
        printf("Customer %d (Account Number: %d):\n", i + 1, accountNumber);
        printf("New credit limit: $%.2f\n", newCreditLimit);

        // Check if balance exceeds new credit limit
        if (currentBalance > newCreditLimit)
        {
            printf("Warning: Current balance of $%.2f exceeds the new credit limit!\n", currentBalance);
        }
        else
        {
            printf("Current balance of $%.2f is within the new credit limit.\n", currentBalance);
        }

        printf("------------------------------\n");
    }

    return 0;
}

