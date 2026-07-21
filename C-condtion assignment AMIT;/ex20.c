// Write a C program to input two numbers and display the smaller number using the ternary operator.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;
    printf("Enter the two numbers : \n");
    if (scanf("%d %d", &num1, &num2) != 2)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    printf("%d is the smaller number : \n", (num1 > num2) ? (num2) : (num1));
    exit(0);
}