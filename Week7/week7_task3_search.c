#include <stdio.h>
#include <string.h>

int main()
{
    char supplier1[50];
    char supplier2[50];

    printf("Enter first supplier name: ");
    fgets(supplier1, sizeof(supplier1), stdin);

    printf("Enter second supplier name: ");
    fgets(supplier2, sizeof(supplier2), stdin);

    supplier1[strcspn(supplier1, "\n")] = '\0';
    supplier2[strcspn(supplier2, "\n")] = '\0';

    if(strcmp(supplier1, supplier2) == 0)
    {
        printf("Supplier names match.\n");
    }
    else
    {
        printf("Supplier names do not match.\n");
    }

    return 0;

}