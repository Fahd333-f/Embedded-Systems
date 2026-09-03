#include <stdio.h>
typedef struct
{
    int id;
    char name[50];
    int grade;
} Student;

int main()
{
    Student arr[5];
    printf("Enter the all information about the students \n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the ID of student number[%d]  : ", i + 1);
        scanf("%d", &arr[i].id);
        printf("Enter the NAME of student number[%d]  : ", i + 1);
        scanf(" %[^\n]", arr[i].name);
        printf("Enter the GRADE of student number[%d]  : ", i + 1);
        scanf("%d", &arr[i].grade);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" the ID of student number[%d]  is : %d \n", i + 1, arr[i].id);

        printf(" the NAME of student number[%d]  is : %s \n", i + 1, arr[i].name);

        printf(" the GRADE of student number[%d]  is : %d \n", i + 1, arr[i].grade);
    }
    return 0;
}