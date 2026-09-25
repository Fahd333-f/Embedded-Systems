#include <stdio.h>

int calculate_profit_loss(int cost_price, int selling_price);

int main()
{
    int cost_price, selling_price;

    printf("Input Cost Price: ");
    scanf("%d", &cost_price);

    printf("Input Selling Price: ");
    scanf("%d", &selling_price);

    int result = calculate_profit_loss(cost_price, selling_price);

    if (result > 0)
    {
        printf("You can booked your profit amount : %d\n", result);
    }
    else if (result < 0)
    {

        printf("You got a loss of amount : %d\n", result);
    }
    else
    {
        printf("You are running in no profit no loss condition.\n");
    }

    return 0;
}

int calculate_profit_loss(int cost_price, int selling_price)
{

    return selling_price - cost_price;
}