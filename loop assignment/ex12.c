#include <stdio.h>

int square(int num);

int main()
{
    int result = square(5);
    printf("%d\n", result);
    return 0;
}

int square(int num)
{
    return num * num;
}