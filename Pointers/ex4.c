#include <stdio.h>
void calculate_division(int total, int divisor, int *quotient, int *remainder);
int main()
{
    int total = 25000;
    int divisor = 1000;
    int quotient;
    int remainder;
    calculate_division(total, divisor, &quotient, &remainder);
    printf("the quotient is %d,and the remainder is %d :\n", quotient, remainder);
}
void calculate_division(int total, int divisor, int *quotient, int *remainder)
{
    *quotient = total / divisor;
    *remainder = total % divisor;
}