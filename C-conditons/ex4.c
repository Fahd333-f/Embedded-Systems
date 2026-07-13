// make this code with nested
#include <stdio.h>
int main()
{
    int num;

    printf("enter the number : \n");
    scanf("%d", &num);
    if (num >= 0)
    {
        if (num == 0)
        {
            printf("the number was zero : \n");
        }
        else
        {

            printf("the number is postive : \n");
        }
    }
    else
    {
        if (num <= 0)
        {
            if (num == 0)
            {
                printf("the number was zero : \n");
            }
            else
            {
                printf("the number is negative : \n");
            }
        }
    }
    return 0;
}
