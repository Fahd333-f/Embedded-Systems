#include <stdio.h>
#include <stdlib.h>
void check_even_odd(int number); // declaration
int main()
{
    int number;
    printf("enter the number :\n");
    scanf("%d", &number);
    check_even_odd(number); // call function
}
void check_even_odd(int number) // implemtation
{
    if (number % 2 == 0)
    {
        printf("even number :\n");
    }
    else
    {
        printf("odd number :\n");
    }
}