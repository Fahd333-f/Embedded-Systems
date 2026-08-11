#include <stdio.h>
#include <stdlib.h>
int find_maximum(int num1, int num2);
int main()
{
    int number_x, number_y;
    printf("Enter the two numbers : \n");
    scanf("%d%d", &number_x, &number_y);
    printf("the max number is %d :\n", find_maximum(number_x, number_y));
    return 0;
}
int find_maximum(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
    // return (num1 > num2) ? (num1) : (num2);
}
