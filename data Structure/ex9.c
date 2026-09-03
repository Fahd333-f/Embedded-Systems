#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int kilometers;
    int meters;
    int millimeters;
} Distance;

void scan_function(Distance *ptr);

int main()
{
    int total_km = 0, total_m = 0, total_mm = 0;

    Distance *ptr = (Distance *)malloc(2 * sizeof(Distance));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    scan_function(ptr);

    total_mm = ptr[0].millimeters + ptr[1].millimeters;
    total_m = ptr[0].meters + ptr[1].meters;
    total_km = ptr[0].kilometers + ptr[1].kilometers;

    if (total_mm >= 1000)
    {
        total_mm = total_mm - 1000;
        total_m += 1;
    }

    if (total_m >= 1000)
    {
        total_m = total_m - 1000;
        total_km += 1;
    }

    printf("The total distance is %d km, %d m, %d mm\n", total_km, total_m, total_mm);

    free(ptr);
    ptr = NULL;

    return 0;
}

void scan_function(Distance *ptr)
{
    for (int i = 0; i < 2; i++)
    {
        printf("\n--- Distance [%d] ---\n", i + 1);
        printf("Enter Kilometers: ");
        scanf("%d", &ptr[i].kilometers);
        printf("Enter Meters: ");
        scanf("%d", &ptr[i].meters);
        printf("Enter Millimeters: ");
        scanf("%d", &ptr[i].millimeters);
    }
}