#include <stdio.h>
#include <string.h>

int main()
{
    char supplierName[50];

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    supplierName[strcspn(supplierName, "\n")] = '\0';

    printf("Supplier name: %s\n", supplierName);
    printf("Name length: %zu characters\n", strlen(supplierName));

    return 0;
}