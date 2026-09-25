#include <stdio.h>

void voting_eligibilty_function(int citizen_year);

int main()
{
    int citizen_year = 0;

    printf("Input the age of the candidate : ");
    scanf("%d", &citizen_year);

    voting_eligibilty_function(citizen_year);

    return 0;
}

void voting_eligibilty_function(int citizen_year)
{
    if (citizen_year >= 18)
    {

        printf("Congratulation! You are eligible for casting your vote.\n");
    }
    else
    {

        printf("Sorry, You are not eligible to cast your vote.\n");
    }
}