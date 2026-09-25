#include <stdio.h>

void Largest_of_three_Numbers(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3;
    printf("Input the values of three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    Largest_of_three_Numbers(num1, num2, num3);

    return 0;
}

void Largest_of_three_Numbers(int num1, int num2, int num3)
{

    int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The greatest number is : %d\n", max);
}