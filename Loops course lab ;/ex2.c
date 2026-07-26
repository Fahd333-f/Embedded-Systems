#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    printf("Enter the number : \n");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    while (number >= 1)
    {
        printf("%d the number now : \n ", number);
        number--;
    }
}