#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Input any two numbers separated by comma : ");
    scanf("%d,%d", &num1, &num2);

    printf("The sum of the given numbers : %d\n", num1 + num2);
    printf("The difference of the given numbers : %d\n", num1 - num2);
    printf("The product of the given numbers : %d\n", num1 * num2);
    printf("The quotient of the given numbers : %f\n", (float)num1 / num2);

    return 0;
}