#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer number: \n");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("The number is Zero.\n");
    }
    else
    {
        if (num > 0)
        {
            printf("The number is Positive ");
        }
        else
        {
            printf("The number is Negative ");
        }

        if (num & 1)
        {
            printf("and ODD.\n");
        }
        else
        {
            printf("and EVEN.\n");
        }
    }

    return 0;
}
