#include <stdio.h>
void Sum_of_Positive_Integers_Until_function();
int main()
{
    Sum_of_Positive_Integers_Until_function();
}
void Sum_of_Positive_Integers_Until_function()
{

    int user_number = 0;
    int sum = 0;
    while (1)
    {
        printf("ENTER THE POSTIVE INTEGERS NUMBERS \n ");

        scanf("%d", &user_number);
        if (user_number == 0)
        {
            break;
        }
        if (user_number < 0)
        {
            printf("INVALID INPUT PLEASE ENTER A POSTIVE INTEGER NUMBER : \n");
            continue;
        }
        sum += user_number;
    }
    if (user_number == 0)
    {
        printf("THE SUM OF ALL POSTIVE NUMBERS IS %d : \n", sum);
    }
}