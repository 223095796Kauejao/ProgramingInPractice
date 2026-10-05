#include <stdio.h>
#include <string.h>

int main()
{
    char supplierName[50];
    char copiedName[50];

    printf("Enter supplier name: ");
    fgets(supplierName, sizeof(supplierName), stdin);

    supplierName[strcspn(supplierName, "\n")] = '\0';

    strcpy(copiedName, supplierName);

    printf("Original supplier name: %s\n", supplierName);
    printf("Copied supplier name: %s\n", copiedName);

    return 0;
}