#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    int grade;
    char Name[50];

    struct address
    {
        char city[50];
        char street[50];
        int building_num;
    } student_address;

} Student;

void scan_function(Student *student, int Number_of_students);
void print_function(Student *student, int Number_of_students);

int main()
{
    int students_num = 0;

    printf("Enter the number of students: \n");
    scanf("%d", &students_num);

    Student *ptr = (Student *)malloc(students_num * sizeof(Student));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    scan_function(ptr, students_num);
    print_function(ptr, students_num);

    free(ptr);
    ptr = NULL;

    return 0;
}

void scan_function(Student *student, int Number_of_students)
{
    for (int i = 0; i < Number_of_students; i++)
    {
        printf("Enter the ID of student number[%d]: \n", i + 1);
        scanf("%d", &student[i].id);

        printf("Enter the NAME of student number[%d]: \n", i + 1);
        scanf(" %[^\n]", student[i].Name);

        printf("Enter the GRADE of student number[%d]: \n", i + 1);
        scanf("%d", &student[i].grade);

        printf("Enter the CITY of the student number[%d]: \n", i + 1);
        scanf(" %[^\n]", student[i].student_address.city);

        printf("Enter the STREET of the student number[%d]: \n", i + 1);
        scanf(" %[^\n]", student[i].student_address.street);

        printf("Enter the BUILDING NUM of the student number[%d]: \n", i + 1);
        scanf("%d", &student[i].student_address.building_num);
    }
}

void print_function(Student *student, int Number_of_students)
{
    printf("\n--- Students Details ---\n");
    for (int i = 0; i < Number_of_students; i++)
    {
        printf("\nStudent [%d]:\n", i + 1);
        printf("ID: %d\n", student[i].id);
        printf("Name: %s\n", student[i].Name);
        printf("Grade: %d\n", student[i].grade);
        printf("Address: %s, %s, Building %d\n", student[i].student_address.city, student[i].student_address.street, student[i].student_address.building_num);
    }
}