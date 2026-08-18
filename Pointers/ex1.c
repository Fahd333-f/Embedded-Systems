#include <stdio.h>
void reset_sensor(int *sensor_val);
int main()
{
    int reset_sensor9 = 100;
    reset_sensor(&reset_sensor9);
}
void reset_sensor(int *sensor_val)
{
    *sensor_val = 0;
    printf("%d", *sensor_val);
}