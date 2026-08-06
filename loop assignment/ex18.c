#include <stdio.h>

int sum_of_digits(int num);

int main()
{
    int result = sum_of_digits(153);
    printf("%d\n", result);
    return 0;
}

int sum_of_digits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}