#include <stdio.h>
#include <string.h>

int main()
{
    char supplierName[100];
    char supplierLocation[50];

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    printf("Enter supplier location: ");
    fgets(supplierLocation, sizeof(supplierLocation), stdin);

    supplierName[strcspn(supplierName, "\n")] = '\0';
    supplierLocation[strcspn(supplierLocation, "\n")] = '\0';

    strcat(supplierName, " - ");
    strcat(supplierName, supplierLocation);

    printf("Supplier details: %s\n", supplierName);

    return 0;
}