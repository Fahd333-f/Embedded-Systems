#include <stdio.h>

int max(int num1, int num2);

int main()
{
    int result = max(10, 20);
    printf("%d\n", result);
    return 0;
}

int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}