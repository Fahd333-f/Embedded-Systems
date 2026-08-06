#include <stdio.h>
#include <stdlib.h>
void multiplication_table(int number);
int main()
{
    int number;
    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    multiplication_table(number);
    return 0;
}
void multiplication_table(int number)
{
    int result;
    for (int i = 1; i <= 10; i++)
    {
        result = number * i;
        printf("%d * %d = %d \n", number, i, result);
    }
}