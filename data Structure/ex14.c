#include <stdio.h>

typedef struct
{
    int id;
    int grade;
    char Name[50];
} Student;

void scan_function(Student *student);
void print_function(Student *student);

int main()
{
    Student s1;

    scan_function(&s1);
    print_function(&s1);

    return 0;
}

void scan_function(Student *student)
{
    printf("Enter the ID of the student: \n");
    scanf("%d", &student->id);

    printf("Enter the NAME of the student: \n");
    scanf(" %[^\n]", student->Name);

    printf("Enter the GRADE of the student: \n");
    scanf("%d", &student->grade);
}

void print_function(Student *student)
{
    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", student->id);
    printf("Name: %s\n", student->Name);
    printf("Grade: %d\n", student->grade);
}