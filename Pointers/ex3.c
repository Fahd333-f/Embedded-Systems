#include <stdio.h>
void limit_speed(int *speed, int max_speed);
int main()
{
    int current_speed;
    int max_s = 100;
    printf("Enter your current speed : \n");
    scanf("%d", &current_speed);
    limit_speed(&current_speed, max_s);
}
void limit_speed(int *speed, int max_speed)
{

    if (*speed > max_speed)
    {
        *speed = max_speed;
        printf("The speed after checking is: %d\n", *speed);
    }
    else
    {
        printf("Perfect speed : \n");
    }
}
