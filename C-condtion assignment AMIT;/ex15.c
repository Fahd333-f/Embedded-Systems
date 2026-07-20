//. Write a C program to input an arithmetic operator (+, -, *, /) and two numbers, then perform the selected operation using switch.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    char op;

    printf("Enter the first number : \n");
    if (scanf("%d", &num1) != 1)
    {
        printf("Invalid input number  \n");
        exit(1);
    }
    printf("Enter the operator\n");
    if (scanf(" %c", &op) != 1)
    {
        printf("Invalid input operator  \n ");
        exit(1);
    }
    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
    {
        printf("Invalid operator\n");
        exit(1);
    }
    printf("Enter the Second number : \n");
    if (scanf("%d", &num2) != 1)
    {
        printf("Invalid input number  \n");
        exit(1);
    }
    switch (op)
    {
    case '+':
        printf(" %d is the addition of two numbers \n", num1 + num2);
        break;
    case '-':
        printf("%d is the subtraction of two numbers \n", num1 - num2);
        break;
    case '*':
        printf("%d is the multiplication of two numbers \n", num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Error input \n");
        }
        else
        {
            printf("%.2f is the quotient of two numbers : \n", (float)num1 / (float)num2);
            exit(1);
        }

    case '%':
        if (num2 == 0)
        {
            printf("Error input \n");
        }
        else
        {
            printf("%d is the remainder of two numbers \n", num1 % num2);
            exit(1);
        }

    default:
        printf("Error input \n");
       exit(1);
        
    }
    exit(0);
}
