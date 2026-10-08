#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
};

void searchEmployee(struct Employee employees[], int count, int searchID)
{
    int i;

    for (i = 0; i < count; i++)
    {
        if (employees[i].id == searchID)
        {
            printf("\nEmployee Found!\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            return;
        }
    }

    printf("\nEmployee not found.\n");
}

int main()
{
    struct Employee employees[3] =
    {
        {1, "John"},
        {2, "Mary"},
        {3, "Peter"}
    };

    int searchID;

    printf("Enter employee ID to search: ");
    scanf("%d", &searchID);

    searchEmployee(employees, 3, searchID);

    return 0;
}