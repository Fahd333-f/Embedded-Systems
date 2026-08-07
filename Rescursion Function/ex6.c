
#include <stdio.h>
int sum_of_all_natural_numbers(int number, int i);

int main()
{
    int number;
    int i = 0;
    printf("Enter the number : \n");
    scanf("%d", &number);
    printf("%d", sum_of_all_natural_numbers(number, i));
}
int sum_of_all_natural_numbers(int number, int i)
{

    if (number == i)
    {
        printf("Finsh : \n");
        return i;
    }

    return i + sum_of_all_natural_numbers(number, i + 1);
}