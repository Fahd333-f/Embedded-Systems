// write a C program to print the numbers from 1 to 100 using a for loop.
#include <stdio.h>
void print_from_1_to_100();
int main()
{
    print_from_1_to_100();
    return 0;
}
void print_from_1_to_100()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%d \n", i);
    }
}