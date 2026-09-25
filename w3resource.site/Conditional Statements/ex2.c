#include <stdio.h>
void check_type_function(int number);
int main()
{
    int number;
    printf("Enter the number : \n");
    scanf("%d", &number);
    check_type_function(number);
    return 0;
}
void check_type_function(int number)
{
    if (number % 2 == 0)
    {
        printf("This number [%d] is even  : \n", number);
    }
    else
    {
        printf("this number [%d] is odd  : \n", number);
    }
}
