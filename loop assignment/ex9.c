#include <stdio.h>
void Fibonacci_series_up_to_N_terms(int number);
int main()
{
    int number_x;
    printf("Enter the number : \n");
    if (scanf("%d", &number_x) != 1)
    {
        printf("Invalid input : \n");
        return 1;
    }
    Fibonacci_series_up_to_N_terms(number_x);
    return 0;
}
void Fibonacci_series_up_to_N_terms(int number)
{
    int first = 0;
    int last = 1;
    int sum;
    int i = 1;
    while (i <= number)
    {

        sum = last + first;

        printf("Fibonacci_series is %d \n", first);
        first = last;
        last = sum;
        i++;
    }
}
