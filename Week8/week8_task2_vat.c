#include <stdio.h>

float calculateVAT(float amount)
{
    return amount * 0.15;
}

int main()
{
    float amount;
    float vat;

    printf("Enter amount: ");
    scanf("%f", &amount);

    vat = calculateVAT(amount);

    printf("VAT: %.2f\n", vat);
    printf("Total amount: %.2f\n", amount + vat);

    return 0;
}