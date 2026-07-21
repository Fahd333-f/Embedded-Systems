//Write a C program to input marks and display Pass or Fail using the ternary operator
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int marks;
    printf("Enter the marks : \n");
    if (scanf("%d", &marks) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    (marks >= 50) ? (printf("Pass : \n")) : (printf("Fail : \n"));
    exit(0);
}