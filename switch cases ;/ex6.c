#include <stdio.h>
int main()
{

    int num1, num2;
    char op;

    printf("enter the first number : \n");
    scanf("%d", &num1);
    printf("enter the operator : \n");
    scanf(" %c", &op);
    printf("enter the second number : \n");
    scanf("%d", &num2);

    switch (op)
    {

    case '+':
        printf("the sum  of two numbers  = %d\n", num1 + num2);
        break;
    case '-':
        printf("the subtracte of two numbers  = %d\n", num1 - num2);
        break;
    case '*':
        printf("the multplication of two numbers = %d\n", num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf(" error (invaild iput )");
        }
        else
        {
            printf(" the quotient of two number = %d\n", num1 / num2);
        }
        break;
    default:
        printf("Invalid operator\n");
        break;
    }
    return 0;
}