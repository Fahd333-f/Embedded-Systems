#include <stdio.h>

int main()
{
    int num1, num2, choice;

    scanf("%d", &num1);
    scanf("%d", &choice);
    scanf("%d", &num2);

    switch (choice)
    {
    case 1:
        printf("The Addition of %d and %d is: %d\n", num1, num2, num1 + num2);
        break;
    case 2:
        printf("The Subtraction of %d and %d is: %d\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("The Multiplication of %d and %d is: %d\n", num1, num2, num1 * num2);
        break;
    case 4:
        if (num2 != 0)
            printf("The Division of %d and %d is: %d\n", num1, num2, num1 / num2);
        else
            printf("Division by zero is not allowed.\n");
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}