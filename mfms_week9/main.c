#include <stdio.h>

#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"

void displayMainMenu(void)
{
    printf("\n");
    printf("============================================\n");
    printf("   MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("============================================\n");
    printf("1. Add Employee\n");
    printf("2. List Employees\n");
    printf("3. Search Employee\n");
    printf("4. Add Budget\n");
    printf("5. Calculate Budget Balance\n");
    printf("6. Employee Report\n");
    printf("7. Budget Report\n");
    printf("8. Exit\n");
    printf("============================================\n");
}

int main(void)
{
    int choice;

    do
    {
        displayMainMenu();

        printf("Enter your choice: ");
        choice = readInt();

        switch (choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                listEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                addBudget();
                break;

            case 5:
                calculateBudgetBalance();
                break;

            case 6:
                employeeReport();
                break;

            case 7:
                budgetReport();
                break;

            case 8:
                printf("\nExiting MFMS...\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 8);

    return 0;
}