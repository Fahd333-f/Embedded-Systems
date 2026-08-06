#include <stdio.h>
void reverse_number(int number);
int main()
{
    int number_x;
    printf("Enter the number : \n");
    if (scanf("%d", &number_x) != 1)
    {
        printf("Invalid input : \n");
        return 1;
    }
    reverse_number(number_x);
}
void reverse_number(int number)
{
    int last = number;
    int reversed = 0;
    for (int i = 1; number > 0; i++)
    {
        last = number % 10;
        number = number / 10;
        reversed = (reversed * 10) + last;
    }
    printf("the reversed number is %d : \n", reversed);
    
}
