#include <stdio.h>

void check_triangle_type(int side1, int side2, int side3);

int main()
{
    int side1, side2, side3;

    printf("Input three sides of triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    check_triangle_type(side1, side2, side3);

    return 0;
}

void check_triangle_type(int side1, int side2, int side3)
{
    if (side1 == side2 && side2 == side3)
    {
        printf("This is an equilateral triangle.\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("This is an isosceles triangle.\n");
    }
    else
    {
        printf("This is a scalene triangle.\n");
    }
}