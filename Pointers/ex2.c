#include <stdio.h>

void modify(int *p)
{
    int temp = 100;
    p = &temp;
}

int main()
{
    int x = 10;
    int *ptr = &x;
    modify(ptr);
    printf("%d", *ptr);
}