// Write a C program to find sum of all even numbers between 1 to n.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sum = 0;
    int number;
    int i = 1;

    printf("Enter the  number : \n");
    scanf("%d", &number);
    while (i <= number)

    {
        i++;

        if (i % 2 == 0)
        {
            sum += i;
  printf("%d\n", sum);
        }
    }
  
}