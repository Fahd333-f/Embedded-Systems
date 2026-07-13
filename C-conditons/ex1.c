// lab1
#include <stdio.h>
int main()
{
    int num;

    printf("enter the number : \n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("the number was even : \n");
    }
    else
    {
        printf("the number was odd  : \n");
    }
    return 0;
}
