#include <stdio.h>
void Equality_function(int num1, int num2);
int main()
{
    int num1, num2;
    printf("Enter the TWO numbers TO check it : \n");
    scanf("%d%d", &num1, &num2);
    Equality_function(num1, num2);
    return 0;
}
void Equality_function(int num1, int num2)
{
    if (num1 == num2)
        printf("THE TWO NUMBERS ARE EQUAL : \n");
    else
        printf("THE TWO NUMBERS NOT EQUAL : \n");
}