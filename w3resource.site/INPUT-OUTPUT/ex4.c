#include <stdio.h>

void convert_from_kilom_per_hour_to_miles_per_hour(float kilometer);

int main()
{
    float kilometer = 0;
    printf("Enter the kilometers : \n");
    scanf("%f", &kilometer);

    convert_from_kilom_per_hour_to_miles_per_hour(kilometer);

    return 0;
}

void convert_from_kilom_per_hour_to_miles_per_hour(float kilometer)
{

    printf("The number after convert to miles per hour is %f\n", kilometer * 0.621371);
}