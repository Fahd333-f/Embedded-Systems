// Write a C program to input a person's age and check whether the person is eligible to vote using if-else.

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age : \n");

    if (scanf("%d", &age) != 1)
    {
        printf(" invalid input \n");
        return 0;
    }
    if (age < 0 || age > 120)
    {
        printf(" Logical error \n");
        return 0;
    }
    if (age >= 18)
    {
        printf("%d : is eligible age \n", age);
    }
    else
    {
        printf("%d : is not  eligible age \n", age);
    }
    return 0;
}