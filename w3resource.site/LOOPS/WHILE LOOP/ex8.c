#include <stdio.h>

void print_cube_of_numbers_function(int limit);

int main()
{
    int limit = 0;
    printf("ENTER THE LIMIT OF THE LOOP  \n");
    printf("\n----------------------------------\n");
    scanf("%d", &limit);

    print_cube_of_numbers_function(limit);

    return 0;
}
void print_cube_of_numbers_function(int limit)
{
    int i = 1;
    long long int sum = 0;

    while (i <= limit)
    {

        if (i % 2 == 0)
        {
            sum += i * i * i;
        }

        i++;
    }

    printf("THE SUM OF CUBE NUMBERS IS [%lld] :\n", sum);
}