#include <stdio.h>
int main() {
    double revenue;
    double expences;
    double balance;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expences: ");
    scanf("%lf", &expences);

    balance = revenue - expences;

    printf("\nRevenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expences);
    printf("Balance: %.2f\n", balance);

    return 0;
}