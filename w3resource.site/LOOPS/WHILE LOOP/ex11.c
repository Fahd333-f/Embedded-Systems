#include <stdio.h>

void multiplication_table_function(int num);

int main()
{
    int number = 0;
    printf("ENTER A POSITIVE INTEGER : \n");
    scanf("%d", &number);

    multiplication_table_function(number);

    return 0;
}

void multiplication_table_function(int num)
{
    int i = 1;

    printf("\n--- MULTIPLICATION TABLE FOR [%d] ---\n", num);

    while (i <= 10)
    {

        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
}