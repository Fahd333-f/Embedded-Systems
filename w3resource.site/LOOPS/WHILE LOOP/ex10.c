#include <stdio.h>

void print_fiboncci_sequance_function(int max_limit);

int main()
{
    int number = 0;
    printf("ENTER THE MAX LIMIT : \n");
    scanf("%d", &number);
    print_fiboncci_sequance_function(number);
    return 0;
}

void print_fiboncci_sequance_function(int max_limit)
{

    int a = 0, b = 1, next = 0;
    int count = 1;

    while (count <= max_limit)
    {

        printf("THE NUMBER IS [%d] : \n", a);

        next = a + b;
        a = b;
        b = next;

        count++;
    }
}