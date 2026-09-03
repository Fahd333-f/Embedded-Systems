#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int hours;
    int minutes;
    int seconds;
} Time;

void scan_function(Time *ptr);

int main()
{
    int total_hours = 0;
    int total_minutes = 0;
    int total_seconds = 0;

    Time *ptr = (Time *)malloc(2 * sizeof(Time));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    scan_function(ptr);

    total_seconds = ptr[0].seconds + ptr[1].seconds;
    total_minutes = ptr[0].minutes + ptr[1].minutes;
    total_hours = ptr[0].hours + ptr[1].hours;

    if (total_seconds >= 60)
    {
        total_seconds = total_seconds - 60;
        total_minutes += 1;
    }

    if (total_minutes >= 60)
    {
        total_minutes = total_minutes - 60;
        total_hours += 1;

        printf("The total time is %02d:%02d:%02d\n", total_hours, total_minutes, total_seconds);

        free(ptr);
        ptr = NULL;

        return 0;
    }
}
void scan_function(Time *ptr)
{
    for (int i = 0; i < 2; i++)
    {
        printf("\n--- Time [%d] ---\n", i + 1);
        printf("Enter HOURS: ");
        scanf("%d", &ptr[i].hours);
        printf("Enter MINUTES: ");
        scanf("%d", &ptr[i].minutes);
        printf("Enter SECONDS: ");
        scanf("%d", &ptr[i].seconds);
    }
}