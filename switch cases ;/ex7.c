#include <stdio.h>
int main()
{
    int num;
    printf("enter the number :: ");
    scanf("%d", &num);
    switch ((num > 0) - (num < 0))
    {
    case 1:
        puts(" the number was postive : ");
        break;
    case -1:
        puts("the number was negative : ");
        break;
    case 0:
        puts("the number was zero : ");
        break;
    }
    return 0;
}
