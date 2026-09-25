#include <stdio.h>

void coordinate_quadrant_function(int x, int y);

int main()
{
    int x, y;
    
    printf("Input the values for X and Y coordinate : ");
    scanf("%d %d", &x, &y);
    
    coordinate_quadrant_function(x, y);
    
    return 0;
}

void coordinate_quadrant_function(int x, int y)
{
    if (x > 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y);
    }
    else if (x > 0 && y < 0)
    {
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", x, y);
    }
    else if (x == 0 && y == 0)
    {
        printf("The coordinate point (%d,%d) lies at the origin.\n", x, y);
    }
}