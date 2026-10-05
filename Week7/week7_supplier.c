#include <stdio.h>
#include <string.h>

#define MAX_SUPPLIERS 50

struct Supplier
{
    int id;
    char name[50];
    char location[50];
};

int main()
{
    struct Supplier suppliers[MAX_SUPPLIERS];
    int supplierCount = 0;
    int choice;
    int searchID;
    int i;
    int found;

    do
    {
        printf("\n===== SUPPLIER MANAGEMENT SYSTEM =====\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                if (supplierCount >= MAX_SUPPLIERS)
                {
                    printf("Supplier list is full.\n");
                    break;
                }

                printf("Enter supplier ID: ");
                scanf("%d", &suppliers[supplierCount].id);
                getchar();

                printf("Enter supplier name: ");
                fgets(suppliers[supplierCount].name,
                      sizeof(suppliers[supplierCount].name), stdin);

                suppliers[supplierCount].name[
                    strcspn(suppliers[supplierCount].name, "\n")
                ] = '\0';

                printf("Enter supplier location: ");
                fgets(suppliers[supplierCount].location,
                      sizeof(suppliers[supplierCount].location), stdin);

                suppliers[supplierCount].location[
                    strcspn(suppliers[supplierCount].location, "\n")
                ] = '\0';

                supplierCount++;

                printf("Supplier added successfully.\n");
                break;

            case 2:
                if (supplierCount == 0)
                {
                    printf("No suppliers available.\n");
                    break;
                }

                printf("\n===== SUPPLIER DETAILS =====\n");

                for (i = 0; i < supplierCount; i++)
                {
                    printf("Supplier ID: %d\n", suppliers[i].id);
                    printf("Name: %s\n", suppliers[i].name);
                    printf("Location: %s\n", suppliers[i].location);
                    printf("-----------------------------\n");
                }
                break;

            case 3:
                printf("Enter supplier ID to search: ");
                scanf("%d", &searchID);

                found = 0;

                for (i = 0; i < supplierCount; i++)
                {
                    if (suppliers[i].id == searchID)
                    {
                        printf("\nSupplier found!\n");
                        printf("ID: %d\n", suppliers[i].id);
                        printf("Name: %s\n", suppliers[i].name);
                        printf("Location: %s\n", suppliers[i].location);

                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Supplier not found.\n");
                }
                break;

            case 4:
                if (supplierCount == 0)
                {
                    printf("No suppliers available.\n");
                    break;
                }

                for (i = 0; i < supplierCount; i++)
                {
                    printf("%s has %zu characters.\n",
                           suppliers[i].name,
                           strlen(suppliers[i].name));
                }
                break;

            case 5:
                printf("Exiting Supplier Management System...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}