// 2. Write a C program to print all even numbers between 1 and 50 using a while loop.
#include <stdio.h>
void is_even_1_to_50();
int main()
{
    is_even_1_to_50();
    return 0;
}
void is_even_1_to_50()
{
    int i = 1;
    while (i <= 50)
    {
  
        if (i % 2 == 0)
        {
            printf("%d is even : \n", i);
        }
              i++;
    }
}
