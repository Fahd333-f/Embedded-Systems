/*السؤال التاني (اكتب كود): حساب الأسس (Power*/
#include <stdio.h>
#include <stdlib.h>
int power(int base, int exponnent);
int main()
{
    int base, exponnent;
    printf("enter the base and the exponnent :\n");
    if ((scanf("%d%d", &base, &exponnent)) != 2)
    {
        printf("Invalid input please try again : \n");
        exit(1);
    }
    printf("%d", power(base, exponnent));
}
int power(int base, int exponnent)
{
    if (exponnent == 0)
    {
        printf(" now u have the answer \n");
        return 1;

    }

    return base * power(base, exponnent - 1);
}