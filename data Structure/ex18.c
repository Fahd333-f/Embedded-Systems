#include <stdio.h>

typedef struct
{
    int id;
    char Name[50];
    float salary;
} Employee;

void scan_employees(Employee *arr, int size);
void sort_employees(Employee *arr, int size);
void print_employees(Employee *arr, int size);

int main()
{
    int size = 3;
    Employee arr[3];

    scan_employees(arr, size);
    sort_employees(arr, size);
    print_employees(arr, size);

    return 0;
}

void scan_employees(Employee *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("\n--- Employee [%d] ---\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &arr[i].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", arr[i].Name);
        printf("Enter Salary: ");
        scanf("%f", &arr[i].salary);
    }
}

void sort_employees(Employee *arr, int size)
{
    Employee temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j].salary < arr[j + 1].salary)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_employees(Employee *arr, int size)
{
    printf("\n--- Employees Sorted by Salary (Descending) ---\n");
    for (int i = 0; i < size; i++)
    {
        printf("ID: %d | Name: %s | Salary: %.2f\n", arr[i].id, arr[i].Name, arr[i].salary);
    }
}