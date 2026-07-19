#include <stdio.h>
int main()
{
    int N;

    puts("enter the  Last number : ");
    scanf("%d", &N);
    int i = N;
    while (i >= 1)
    {
        printf("the number is : %d \n", i);

        i--;
    }
    return 0;
}