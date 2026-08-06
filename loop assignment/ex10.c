#include <stdio.h>
#include <stdlib.h>
void Largest_number(int number);
int main()
{
    int number;
    printf("Enter the number of numbers : \n");

    if ((scanf("%d", &number)) != 1)
    {
        printf("Invalid input : \n");
        return 1;
    }
    Largest_number(number);
    return 0;
}
void Largest_number(int number)
{

    int i = 1;
    int first, last = 1;
    while (i <= number)
    {
        printf("Enter the number : \n");
        if (scanf("%d", &first) != 1)
        {
            printf("Invalid input : \n");
            exit(1);
        }

        if (i == 1)
        {
            last = first;
        }
        else if (first > last)
        {
            last = first;
        }
        i++;
    }
    printf("the Largest number is %d  \n", last);
}