#include <stdio.h>
void print_function(int temp);
int main()
{
    int temp_c = 0;
    printf("Enter the the degree in Centigrade : \n");
    scanf("%d", &temp_c);

    print_function(temp_c);
    return 0;
}
void print_function(int temp)
{
    printf("The temp in Fahrenheit is %f : \n", (temp * 9.0 / 5) + 32);
}