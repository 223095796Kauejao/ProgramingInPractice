#include <stdio.h>
#include <string.h>

int main()
{
    // ==============================
    // A. EMPLOYEE SALARIES
    // ==============================

    float salaries[50];
    float totalSalary = 0;
    float averageSalary;
    float highestSalary;
    float lowestSalary;
    float searchSalary;
    int salaryFound = 0;

    printf("====================================\n");
    printf("   MUNICIPAL INFORMATION SYSTEM\n");
    printf("====================================\n\n");

    // Capture 50 employee salaries
    printf("ENTER EMPLOYEE SALARIES\n");
    printf("-----------------------\n");

    for (int i = 0; i < 50; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        totalSalary = totalSalary + salaries[i];

        // Use the first salary to initialise highest and lowest
        if (i == 0)
        {
            highestSalary = salaries[i];
            lowestSalary = salaries[i];
        }

        if (salaries[i] > highestSalary)
        {
            highestSalary = salaries[i];
        }

        if (salaries[i] < lowestSalary)
        {
            lowestSalary = salaries[i];
        }
    }

    averageSalary = totalSalary / 50;

    // Display all salaries
    printf("\nEMPLOYEE SALARIES\n");
    printf("-----------------\n");

    for (int i = 0; i < 50; i++)
    {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    // Salary results
    printf("\nSALARY REPORT\n");
    printf("-------------\n");
    printf("Total salary:   %.2f\n", totalSalary);
    printf("Average salary: %.2f\n", averageSalary);
    printf("Highest salary: %.2f\n", highestSalary);
    printf("Lowest salary:  %.2f\n", lowestSalary);

    // Search for a salary
    printf("\nEnter a salary to search for: ");
    scanf("%f", &searchSalary);

    for (int i = 0; i < 50; i++)
    {
        if (salaries[i] == searchSalary)
        {
            printf("Salary found at employee %d.\n", i + 1);
            salaryFound = 1;
            break;
        }
    }

    if (salaryFound == 0)
    {
        printf("Salary not found.\n");
    }


    // ==============================
    // B. DEPARTMENT BUDGETS
    // ==============================

    float budgets[10];
    float totalBudget = 0;
    float averageBudget;
    float temp;

    printf("\n\nENTER DEPARTMENT BUDGETS\n");
    printf("-----------------------\n");

    // Capture 10 budgets
    for (int i = 0; i < 10; i++)
    {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);

        totalBudget = totalBudget + budgets[i];
    }

    averageBudget = totalBudget / 10;

    // Bubble sort - lowest to highest
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (budgets[j] > budgets[j + 1])
            {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    // Display sorted budgets
    printf("\nSORTED DEPARTMENT BUDGETS\n");
    printf("-------------------------\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    printf("\nBUDGET REPORT\n");
    printf("-------------\n");
    printf("Total budget:   %.2f\n", totalBudget);
    printf("Average budget: %.2f\n", averageBudget);


    // ==============================
    // C. VEHICLE REGISTRATIONS
    // ==============================

    char registrations[20][20];
    char searchRegistration[20];
    int registrationFound = 0;

    printf("\n\nENTER VEHICLE REGISTRATIONS\n");
    printf("---------------------------\n");

    // Capture 20 registration numbers
    for (int i = 0; i < 20; i++)
    {
        printf("Enter registration %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    // Display registrations
    printf("\nVEHICLE REGISTRATIONS\n");
    printf("---------------------\n");

    for (int i = 0; i < 20; i++)
    {
        printf("%d. %s\n", i + 1, registrations[i]);
    }

    // Search registration
    printf("\nEnter a registration number to search for: ");
    scanf("%19s", searchRegistration);

    for (int i = 0; i < 20; i++)
    {
        if (strcmp(registrations[i], searchRegistration) == 0)
        {
            printf("Registration found at position %d.\n", i + 1);
            registrationFound = 1;
            break;
        }
    }

    if (registrationFound == 0)
    {
        printf("Registration not found.\n");
    }

    printf("\n====================================\n");
    printf("       PROGRAM COMPLETE\n");
    printf("====================================\n");

    return 0;
}