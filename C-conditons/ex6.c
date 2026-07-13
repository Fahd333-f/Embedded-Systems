#include <stdio.h>
int main()
{
    int num;
    printf("enter the number  : \n");
    scanf("%d", &num);
    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("The number is divisible by both 5 and 11.\n");
    }
    else
    {
        printf("the number not true : \n");
    }
}