#include <stdio.h>
#include <stdlib.h>
int multiplication_Function(int number, int number_2);
int main()
{
    int number_x, number_y;
    printf("Enter the number : \n");
    if ((scanf("%d%d", &number_x, &number_y)) != 2)
    {
        printf("Invalid input :\n");
        exit(1);
    }
    printf("%d", multiplication_Function(number_x, number_y));
}
int multiplication_Function(int number, int number_2)
{
    if (number_2 == 0)
    {
        return 0;
    }

    return number + multiplication_Function(number, (number_2 - 1));
}