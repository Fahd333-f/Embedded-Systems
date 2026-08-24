#include <stdio.h>
void calculate_division(int total, int divisor, int *quotient, int *remainder);
struct fahd
{
    char a;
    int c;
    short int b;
    int d;

    char e;
};

int main()
{
    // int total = 25000;
    // int divisor = 1000;
    // int quotient;
    // int remainder;
    // calculate_division(total, divisor, &quotient, &remainder);
    // printf("the quotient is %d,and the remainder is %d :\n", quotient, remainder)
    struct fahd s1;
    printf("%d", sizeof(s1));
}
void calculate_division(int total, int divisor, int *quotient, int *remainder)
{
    *quotient = total / divisor;
    *remainder = total % divisor;
}