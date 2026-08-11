#include <stdio.h>
static inline int multiply(int a, int b)
{
    return ((a) * (b));
}
int main()
{
    int number_x, number_y;
    printf("Enter the two numbers : \n");
    scanf("%d%d", &number_x, &number_y);
    printf("the result is  %d", multiply(number_x, number_y));
}
