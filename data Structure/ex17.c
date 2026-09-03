#include <stdio.h>

typedef struct
{
    int id;
    char Name[50];
    int grade;
} Student;

int main()
{
    Student s1;
    Student *ptr = &s1;

    printf("Enter ID: \n");
    scanf("%d", &ptr->id);

    printf("Enter Name: \n");
    scanf(" %[^\n]", ptr->Name);

    printf("Enter Grade: \n");
    scanf("%d", &ptr->grade);

    printf("\n--- Student Details ---\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->Name);
    printf("Grade: %d\n", ptr->grade);

    return 0;
}