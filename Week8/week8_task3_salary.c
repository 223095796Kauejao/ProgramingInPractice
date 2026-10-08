#include <stdio.h>

float calculateSalary(float basicSalary, float housingAllowance, float transportAllowance)
{
    return basicSalary + housingAllowance + transportAllowance;
}

int main()
{
    float basicSalary;
    float housingAllowance;
    float transportAllowance;
    float grossSalary;

    printf("Enter basic salary: ");
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

    return 0;
}