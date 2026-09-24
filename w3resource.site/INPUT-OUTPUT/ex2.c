#include <stdio.h>
#include <math.h>
#define pi 3.14
void volume_of_sphere(float radius);
int main()
{
    float radius = 0;
    printf("Enter the radius of sphere : \n");
    scanf("%f", &radius);
    volume_of_sphere(radius);
    return 0;
}
void volume_of_sphere(float radius)
{
    printf("The volume of sphere is %f : \n", (4 * pi * pow(radius, 3)) / 3);
}
