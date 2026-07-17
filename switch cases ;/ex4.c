#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter the two number :: ");
    scanf("%d%d", &num1, &num2);
    switch (num1 > num2)
    {
    case 1:
        printf("the num1 was the max number :  %d\n ",num1);
        break;
    case 0:
     printf("the num2 was the max : %d\n",num2);
        break;
    }
    return 0;
}
