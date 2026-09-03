#include <stdio.h>

typedef struct
{
    int id;
    int grade;
    char Name[50];
} Student;

Student scan_function();
void print_function(Student s);

int main()
{
    Student s1;

    s1 = scan_function();
    print_function(s1);

    return 0;
}

Student scan_function()
{
    Student temp;

    printf("Enter the ID: \n");
    scanf("%d", &temp.id);

    printf("Enter the NAME: \n");
    scanf(" %[^\n]", temp.Name);

    printf("Enter the GRADE: \n");
    scanf("%d", &temp.grade);

    return temp;
}

void print_function(Student s)
{
    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.Name);
    printf("Grade: %d\n", s.grade);
}