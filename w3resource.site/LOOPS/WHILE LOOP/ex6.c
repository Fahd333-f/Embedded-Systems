#include <stdio.h>

void factorial_function(int number);

int main()
{
    int num = 0;
    printf("ENTER A POSITIVE INTEGER NUMBER : \n");
    scanf("%d", &num);

    factorial_function(num);

    return 0;
}

void factorial_function(int number)
{

    unsigned long long factorial = 1;

    while (number > 0)
    {
        factorial *= number;
        number--;
    }

    printf("THE FINAL RESULT IS %llu \n", factorial);
}