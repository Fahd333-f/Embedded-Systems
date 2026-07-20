// Write a C program to input marks and display the grade using an if-else-if ladder.
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int marks;
    printf("Enter your marks : \n");

    if (scanf("%d", &marks) != 1)
    {

        printf("invalid input : \n");
        exit(1);
    }
    if (marks < 0 || marks > 100)
    {
        printf("Logical Error: Marks must be between 0 and 100 : \n");
        exit(1);
    }
    if ((marks <= 100) && (marks >= 90))
    {
        printf("Your grade is : A");
    }
    else if ((marks <= 89) && (marks >= 80))
    {
        printf("Your grade is : B");
    }
    else if ((marks <= 79) && (marks >= 70))
    {
        printf("Your grade is : C");
    }
    else if ((marks <= 69) && (marks >= 60))
    {
        printf("Your grade is : D");
    }
    else
    {
        printf("Your grade is : F ");
    }
    exit(0);
}