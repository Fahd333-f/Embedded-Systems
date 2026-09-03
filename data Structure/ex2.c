#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int id;
    char name[50];
    float salary;
    int marks;
} Employee;
void scan_emp(Employee *s, int number_of_employees);
void print_emp(Employee *s, int number_of_employees);
int main()
{
    int employees = 0;
    printf("Enter the number of employees :  ");
    scanf("%d", &employees);
    Employee *Employee_array = (Employee *)malloc(employees * sizeof(Employee));
    scan_emp(Employee_array, employees);
    print_emp(Employee_array, employees);
    free(Employee_array);
    Employee_array = NULL;
}
void scan_emp(Employee *s, int number_of_employees)
{
    for (int i = 0; i <= number_of_employees; i++)
    {
        printf("Enter the id of employee number [%d]   ", i + 1);
        scanf("%d", &s[i].id);
        printf("Enter the name of employee number [%d]   ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the salary of employee number [%d]   ", i + 1);
        scanf("%f", &s[i].salary);
        printf("Enter the marks of employee number [%d]   ", i + 1);
        scanf("%d", &s[i].marks);
    }
}
void print_emp(Employee *s, int number_of_employees)
{
    for (int i = 0; i <= number_of_employees; i++)
    {
        printf(" the id of employee number [%d]  is : %d \n", i + 1, s[i].id);

        printf(" the name of employee number [%d]  is : %s \n", i + 1, s[i].name);

        printf(" the salary of employee number [%d]  is : %.3f \n", i + 1, s[i].salary);

        printf(" the marks of employee number [%d]  is : %d \n", i + 1, s[i].marks);
    }
}
