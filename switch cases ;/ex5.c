#include <stdio.h>
int main()
{
    int num;
    printf("enter the  number :: ");
    scanf("%d", &num);
    switch (num % 2 == 0)
    {
    case 1:
        printf(" Even number \n");
        break;
    case 0:
        printf("odd number  \n");
        break;
        default :
        puts(" invaild input : ");
        break;

    }
    return 0;
}
