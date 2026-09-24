#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Input three numbers separated by comma : ");
    scanf("%d,%d,%d", &num1, &num2, &num3);
    
    printf("The sum of three numbers : %d\n", num1 + num2 + num3);
    
    return 0;
}
