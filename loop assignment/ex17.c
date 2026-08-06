#include <stdio.h>

float celsius_to_fahrenheit(float celsius);

int main()
{
    float result = celsius_to_fahrenheit(37.0);
    printf("%f\n", result);
    return 0;
}

float celsius_to_fahrenheit(float celsius)
{
    return (celsius * 9.0 / 5.0) + 32.0;
}