#include <stdio.h>
void print_loop_function();
int main()
{
    print_loop_function();
    return 0;
}
void print_loop_function()
{
    int i_1 = 0;
    while (i_1 <= 10)
    {
        printf("THE INDEX NOW = %d\n", i_1);
        i_1++;
    }
    printf("\n---------------------------------------\n\n");
    int i_2 = 10;
    while (i_2 >= 0)
    {

        printf("THE INDEX NOW = %d\n", i_2);
        i_2--;
    }
}