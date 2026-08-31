#include <stdio.h>
#include <string.h>
int main()
{
    char supplierName[50];
    float price;
    float budget;
    int registered;
    int documentComplete;

    float lowestPrice;
    char preferredSupplier[50];

    budget = 100000;
    lowestPrice= 999999999;

    printf("\n--- Supplier 1 ---\n");
    printf("Enter supplier name: ");
    scanf("%49s", supplierName);

    printf("Enter tender price: ");
    scanf("%f", &price);

    printf("Is supplier registered? (1=Yes, 0=No: )");
    scanf("%d", &registered);

    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentComplete);

    if (registered == 1 && documentComplete == 1 && price <= budget)
    {
        printf("Status: Qualified\n");

        if(price < lowestPrice)
        {
            lowestPrice = price;
            strcpy(preferredSupplier, supplierName);
        }
    }
    else
    {
        printf("Status: Disqualified\n");
    }

    printf("\n--- Supplier 2 ---\n");
    printf("Enter supplier name: ");
    scanf("%49s", supplierName);

    printf("Enter tender price: ");
    scanf("%f", &price);

    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentComplete);

    if (registered == 1 && documentComplete == 1 && price <= budget)
    {
        printf("Status: Qualified\n");

        if (price < lowestPrice)
        {
            lowestPrice = price;
            strcpy(preferredSupplier, supplierName);
        }
    }
    else
    {
        printf("Status: Disqualified\n");
    }
printf("\n--- Supplier 3 ---\n");

printf("Enter supplier name: ");
scanf("%49s", supplierName);

printf("Enter tender price: ");
scanf("%f", &price);

printf("Is supplier registered? (1=Yes, 0=No): ");
scanf("%d", &registered);

printf("Are all documents complete? (1=Yes, 0=No): ");
scanf("%d", &documentComplete);

if (registered == 1 && documentComplete == 1 && price <= budget)
{
    printf("Status: Qualified\n");

    if (price < lowestPrice)
    {
        lowestPrice = price;
        strcpy(preferredSupplier, supplierName);
    }

}
else
{
    printf("Status: Disqualified\n");
}

printf("\n--- Supplier 4 ---\n");

printf("Enter supplier name: ");
scanf("%49s", supplierName);

printf("Enter tender price: ");
scanf("%f", &price);

printf("Is supplier registered? (1=Yes, 0=No): ");
scanf("%d", &registered);

printf("Are all documents complete? (1=Yes, 0=No): ");
scanf("%d", &documentComplete);

if (registered == 1 && documentComplete == 1 && price <= budget)
{
    printf("Status: Qualified\n");

    if (price < lowestPrice)
    {
        lowestPrice = price;
        strcpy(preferredSupplier, supplierName);
    }
}
else
{
    printf("Status: Disqualified\n");
}

printf("\n===== TENDER RESULT =====\n");
printf("Budget: %.2f\n", budget);
printf("Preferred Supplier: %s\n", preferredSupplier);
printf("Preferred Price: %.2f\n", lowestPrice);

return 0;
}