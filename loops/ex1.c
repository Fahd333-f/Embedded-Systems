#include <stdio.h>
int main()
{
    int N, i = 1;
    puts("enter the  Last number : ");
    scanf("%d", &N );

    while (i <= N)
    {
        printf("the number is : %d \n", i);

        i++;
    }
    return 0;
}