#include <stdio.h>

float calculateBudget(float budget, float expenditure)
{
    return budget - expenditure;
}

int main()
{
    float budget;
    float expenditure;
    float remaining;

    printf("Enter departmental budget: ");
    scanf("%f", &budget);

    printf("Enter expenditure: ");
    scanf("%f", &expenditure);

    remaining = calculateBudget(budget, expenditure);

    printf("\nRemaining Budget: %.2f\n", remaining);

    if (remaining >= 0)
    {
        printf("Department is within budget.\n");
    }
    else
    {
        printf("Department is over budget.\n");
    }

    return 0;
}