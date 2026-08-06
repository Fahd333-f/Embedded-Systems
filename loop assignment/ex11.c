#include <stdio.h>

int addition(int num1, int num2);

int main()
{
    int result = addition(5, 7);
    printf("%d\n", result);
    return 0;
}

int addition(int num1, int num2)
{
    return num1 + num2;
}