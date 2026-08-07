#include <stdio.h>

int sum_of_all_natural_numbers(int number);

int main()

{

    int number;

    printf("Enter the number : \n");

    scanf("%d", &number);

    printf("%d", sum_of_all_natural_numbers(number));
}

int sum_of_all_natural_numbers(int number)

{

    if (number == 0)

    {

        printf("Finsh : \n");

        return 0;
    }

    return number + sum_of_all_natural_numbers(number - 1);
}