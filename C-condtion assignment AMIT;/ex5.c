// Write a C program to input a student's marks and display whether the student has passed or failed using if-else
#include <stdio.h>
int main()
{
    float grade;

    puts("Enter your grade : ");
    scanf("%f", &grade);
    if (grade >= 50)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}