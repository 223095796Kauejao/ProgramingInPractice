#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float basicSalary;
    float housingAllowance;
    float transportAllowance;
};

/* Calculate VAT */
float calculateVAT(float amount)
{
    return amount * 0.15;
}

/* Calculate Employee Salary */
float calculateSalary(float basicSalary, float housingAllowance, float transportAllowance)
{
    return basicSalary + housingAllowance + transportAllowance;
}

/* Calculate Remaining Budget */
float calculateBudget(float budget, float expenditure)
{
    return budget - expenditure;
}

/* Display Main Menu */
void displayMenu()
{
    printf("\n============================================\n");
    printf("   MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("============================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Employee Salary\n");
    printf("3. Calculate Department Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("============================================\n");
}

/* Search Employee */
void searchEmployee(struct Employee employees[], int count, int searchID)
{
    int i;

    for (i = 0; i < count; i++)
    {
        if (employees[i].id == searchID)
        {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Department: %s\n", employees[i].department);

            return;
        }
    }

    printf("\nEmployee not found.\n");
}

int main()
{
    struct Employee employees[3] =
    {
        {1, "John", "Finance", 25000, 1000, 400},
        {2, "Mary", "Human Resources", 22000, 1200, 500},
        {3, "Peter", "IT", 28000, 1500, 600}
    };

    int choice;
    int searchID;

    float amount;
    float vat;

    float basicSalary;
    float housingAllowance;
    float transportAllowance;
    float grossSalary;

    float budget;
    float expenditure;
    float remainingBudget;

    do
    {
        displayMenu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                printf("\nEnter amount: ");
                scanf("%f", &amount);

                vat = calculateVAT(amount);

                printf("VAT: %.2f\n", vat);
                printf("Total Amount: %.2f\n", amount + vat);

                break;

            case 2:

                printf("\nEnter basic salary: ");
                scanf("%f", &basicSalary);

                printf("Enter housing allowance: ");
                scanf("%f", &housingAllowance);

                printf("Enter transport allowance: ");
                scanf("%f", &transportAllowance);

                grossSalary = calculateSalary(
                    basicSalary,
                    housingAllowance,
                    transportAllowance
                );

                printf("\nGross Salary: %.2f\n", grossSalary);

                break;

            case 3:

                printf("\nEnter departmental budget: ");
                scanf("%f", &budget);

                printf("Enter expenditure: ");
                scanf("%f", &expenditure);

                remainingBudget = calculateBudget(
                    budget,
                    expenditure
                );

                printf("\nRemaining Budget: %.2f\n", remainingBudget);

                if (remainingBudget >= 0)
                {
                    printf("Department is within budget.\n");
                }
                else
                {
                    printf("Department is over budget.\n");
                }

                break;

            case 4:

                printf("\nEnter Employee ID: ");
                scanf("%d", &searchID);

                searchEmployee(employees, 3, searchID);

                break;

            case 5:

                printf("\nExiting MFMS...\n");
                printf("Thank you for using the system!\n");

                break;

            default:

                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}