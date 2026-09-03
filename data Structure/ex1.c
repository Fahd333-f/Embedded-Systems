#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int Roll_number;
    char Name[50];
    int Marks;

} Student;
void scan_function(Student *student, int Number_of_students);
void print_function(Student *student, int Number_of_students);

int main()
{

    int Number_of_students = 0;
    printf("Enter the number of students : \n");
    scanf(" %d", &Number_of_students);
    Student *S_array = (Student *)malloc(Number_of_students * sizeof(Student));
    if (S_array == NULL)
    {
        printf(" Allocated  faild : ");
        return 1;
    }
    scan_function(S_array, Number_of_students);
    print_function(S_array, Number_of_students);
    free(S_array);
    S_array = NULL;
    return 0;
}

void scan_function(Student *student, int Number_of_students)
{

    
    for (int i = 0; i < Number_of_students; i++)
    {
        printf("Enter the Roll of student number[%d]  : ", i);
        scanf("%d", &student[i].Roll_number);
        printf("Enter the Name of student number[%d]  : ", i);
        scanf(" %[^\n]", student[i].Name);
        printf("Enter the Marks of student number[%d]  : ", i);
        scanf("%d", &student[i].Marks);
    }
}
void print_function(Student *student, int Number_of_students)
{
    
    for (int i = 0; i < Number_of_students; i++)
    {
        printf("the Roll of student number[%d] is %d  : \n", i, student[i].Roll_number);

        printf("the Name of student number[%d] is %s : \n", i, student[i].Name);

        printf("the Marks of student number[%d] is %d : \n", i, student[i].Marks);
    }
}