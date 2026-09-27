#include <stdio.h>

void print_multplication_from_1_to_5();

int main()
{
    print_multplication_from_1_to_5();
    return 0;
}

void print_multplication_from_1_to_5()
{
    int i = 1;
    int product = 1;

    while (i <= 5)
    {
        product *= i;
        i++;
    }

    printf("THE PRODUCT OF NUMBERS FROM (1-5) is %d :\n", product);
}