#include <stdio.h>

struct Employee
{
    int employeeID;
    char name[50];
    char department[50];
    double salary;
};

int main(void)
{
    FILE *file;
    struct Employee employee;

    file = fopen("employee.dat", "rb");

    if (file == NULL)
    {
        printf("Error opening binary file.\n");
        return 1;
    }

    fread(&employee, sizeof(struct Employee), 1, file);

    fclose(file);

    printf("\n===== EMPLOYEE FROM BINARY FILE =====\n");
    printf("Employee ID: %d\n", employee.employeeID);
    printf("Name: %s\n", employee.name);
    printf("Department: %s\n", employee.department);
    printf("Salary: %.2f\n", employee.salary);

    return 0;
}