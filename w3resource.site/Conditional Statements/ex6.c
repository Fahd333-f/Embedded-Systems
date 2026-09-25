#include <stdio.h>

void signum_function(int m);

int main()
{
    int m;

    printf("Input the value of m :");
    scanf("%d", &m);

    signum_function(m);

    return 0;
}

void signum_function(int m)
{
    int n;

    if (m > 0)
    {
        n = 1;
    }
    else if (m == 0)
    {
        n = 0;
    }
    else
    {
        n = -1;
    }

    printf("The value of n = %d\n", n);
}