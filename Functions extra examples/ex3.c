#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
float calculate_area(float radius);
int main()
{
    float radius;
    printf("Enter the radius of the circle : \n");
    scanf("%d", &radius);
    printf("the area of the circle is %.2f \n", calculate_area(radius));
}
float calculate_area(float radius)
{
    float area;
    area = radius * radius * pi;
    return area;
}
