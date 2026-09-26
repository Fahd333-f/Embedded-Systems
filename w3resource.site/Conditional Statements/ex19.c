#include <stdio.h>
#include <ctype.h>
void grade_function(char grade);

int main()
{
    char letter;
    printf("ENTER A CAPITAL LETTER GRADE : \n");
    if ((scanf("%c", &letter)) != 1)
    {
        printf("INVALID INPUT");
        return -1;
    }

    letter = toupper(letter);
    grade_function(letter);
}

void grade_function(char grade)
{
    switch (grade)
    {
    case 'E':
        printf("EXCEllENT : \n");
        break;
    case 'V':
        printf("VERY GOOD : \n");
        break;
    case 'G':
        printf("GOOD : \n");
        break;
    case 'A':
        printf("AVEREGE : \n");
        break;
    case 'F':
        printf("Fail : \n");
        break;
    default:
        printf("WRONG INPUT : \n");
    }
}