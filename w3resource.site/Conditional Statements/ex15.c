#include <stdio.h>

void check_triangle_validity(int angle1, int angle2, int angle3);

int main()
{
    int angle1, angle2, angle3;

    printf("Input three angles of triangle : ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    check_triangle_validity(angle1, angle2, angle3);

    return 0;
}

void check_triangle_validity(int angle1, int angle2, int angle3)
{

    int sum = angle1 + angle2 + angle3;

    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
}
