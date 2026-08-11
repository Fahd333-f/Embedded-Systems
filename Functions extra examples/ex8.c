#include <stdio.h>
#define MIN(a, b) ((a > b) ? (b) : (a))
int main()
{
    int number_x, number_y;
    printf("Enter the two numbers : \n");
    scanf("%d%d", &number_x, &number_y);
    printf("the min muber is : %d \n", MIN(number_x, number_y));
}