// same like ex1 but with bitwise operators
#include <stdio.h>
int main()
{

    int num;
    puts("enter the number : ");
    scanf("%d", &num);
    if (num & 1)
    {
        puts(" the number was odd  : ");
    }
    else
    {
        puts("the number was even : ");
    }
}