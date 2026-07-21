#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter the number to show if it even or odd : \n");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input : \n");
        exit(1);
    }
    (num % 2 == 0)?(printf("Even number : ")):(printf("Odd number : "));
}