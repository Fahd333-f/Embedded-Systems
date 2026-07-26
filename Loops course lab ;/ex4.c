#include <stdio.h>
#include <stdlib.h>
int main()
{
    int counter = 1;
    while (counter <= 100)
    {
        if (counter % 2 == 0)
        {
            printf("%d \n", counter);
        }
        counter++;
    }
    exit(0);
}