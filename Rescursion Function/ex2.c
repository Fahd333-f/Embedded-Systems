#include <stdio.h>
#include <stdlib.h>
void system_x(int number);
int main()
{
    int number;
    printf("Enter the number: \n");
    if ((scanf("%d", &number)) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    system_x(number);
    return 0;
}
void system_x(int number)
{
    if (number == 0)
    {
        printf("system Ready :\n");
        return;
    }
    printf(" %d : \n", number);
    system_x(number - 1);
}