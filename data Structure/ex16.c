#include <stdio.h>

typedef struct
{
    int id;
    char Name[50];
    float salary;
} Employee;

void scan_employee(Employee *emp);
void update_salary(Employee *emp);
void print_employee(Employee *emp);

int main()
{
    Employee e1;

    scan_employee(&e1);
    update_salary(&e1);
    print_employee(&e1);

    return 0;
}

void scan_employee(Employee *emp)
{
    printf("Enter the ID of the employee: \n");
    scanf("%d", &emp->id);

    printf("Enter the NAME of the employee: \n");
    scanf(" %[^\n]", emp->Name);

    printf("Enter the CURRENT SALARY: \n");
    scanf("%f", &emp->salary);
}

void update_salary(Employee *emp)
{
    float increase = 0;
    printf("\nEnter the amount to add to the salary: \n");
    scanf("%f", &increase);

    emp->salary = emp->salary + increase;
}

void print_employee(Employee *emp)
{
    printf("\n--- Updated Employee Details ---\n");
    printf("ID: %d\n", emp->id);
    printf("Name: %s\n", emp->Name);
    printf("New Salary: %.2f\n", emp->salary);
}