#include <stdio.h>

void calculate_student_grade(int roll_no, char name[], int phy, int chem, int ca);

int main()
{
    int roll_no, phy, chem, ca;
    char name[50];

    printf("Input the Roll Number of the student :");
    scanf("%d", &roll_no);

    printf("Input the Name of the Student :");
    scanf("%s", name);

    printf("Input the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d %d %d", &phy, &chem, &ca);

    calculate_student_grade(roll_no, name, phy, chem, ca);

    return 0;
}

void calculate_student_grade(int roll_no, char name[], int phy, int chem, int ca)
{
    int total = phy + chem + ca;
    float percentage = total / 3.0;

    printf("Roll No : %d\n", roll_no);
    printf("Name of Student : %s\n", name);
    printf("Marks in Physics : %d\n", phy);
    printf("Marks in Chemistry : %d\n", chem);
    printf("Marks in Computer Application : %d\n", ca);
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if (percentage >= 60.0)
    {
        printf("Division = First\n");
    }
    else if (percentage >= 48.0 && percentage < 60.0)
    {
        printf("Division = Second\n");
    }
    else if (percentage >= 36.0 && percentage < 48.0)
    {
        printf("Division = Pass\n");
    }
    else
    {
        printf("Division = Fail\n");
    }
}