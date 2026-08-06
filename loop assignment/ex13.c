#include <stdio.h>

int calc_odd_even_number(int num);

int main()
{
    int result = calc_odd_even_number(4);
    printf("%d\n", result);
    return 0;
}

int calc_odd_even_number(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}