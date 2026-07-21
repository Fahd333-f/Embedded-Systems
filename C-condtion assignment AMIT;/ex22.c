//  Write a C program to input three numbers and display the largest number using the ternary operator.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the three numbers : \n");
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    printf("%d is the largest number : \n", (num1 > num2) ? ((num1 > num3) ? (num1) : (num3)) : ((num2 > num3) ? (num2) : (num3)));
    exit(0);
}