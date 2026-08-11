#include <stdio.h>
int main()
{
    int a = 15;
    printf("the a = %d ", a);
    int *ptr = &a;

    *ptr = 20;
    printf("the a = %d", a);
}