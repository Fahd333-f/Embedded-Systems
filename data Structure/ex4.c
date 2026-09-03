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
void print_max_marks(Student *student, int Number_of_students);

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
    // print_function(S_array, Number_of_students);
    print_max_marks(S_array, Number_of_students);
    free(S_array);
    S_array = NULL;
    return 0;
}

void scan_function(Student *student, int Number_of_students)
{

    for (int i = 0; i < Number_of_students; i++)
    {
        printf("Enter the Roll of student number[%d]  : ", i + 1);
        scanf("%d", &student[i].Roll_number);
        printf("Enter the Name of student number[%d]  : ", i + 1);
        scanf(" %[^\n]", student[i].Name);
        printf("Enter the Marks of student number[%d]  : ", i + 1);
        scanf("%d", &student[i].Marks);
    }
}
void print_function(Student *student, int Number_of_students)
{

    for (int i = 0; i < Number_of_students; i++)
    {
        printf("the Roll of student number[%d] is %d  : \n", i + 1, student[i].Roll_number);

        printf("the Name of student number[%d] is %s : \n", i + 1, student[i].Name);

        printf("the Marks of student number[%d] is %d : \n", i + 1, student[i].Marks);
    }
}
void print_max_marks(Student *student, int Number_of_students)
{
    int max = student[0].Marks;
    int student_number = 0;
    for (int i = 0; i < Number_of_students; i++)
    {
        if (student[i].Marks > max)
        {
            max = student[i].Marks;
            student_number = i + 1;
        }
    }
    printf("studendt number [%d] have the highest marks that is %d : ", student_number, max);
}
