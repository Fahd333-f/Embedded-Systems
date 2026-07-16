#include <stdio.h>
int main()
{
    int day;
    puts("enter the number of day from 0 to 6  :  ");
    scanf("%d", &day);

    switch (day)
    {
    case 0:
        puts("satarday");
        break;
    case 1:
        puts("sunday");
        break;
    case 2:
        puts("monday");
        break;
    case 3:
        puts("tuesday");
        break;
    case 4:
        puts("wednesday");
        break;
    case 5:
        puts("thursday");
        break;
    case 6:
        puts("friday");
        break;
    default:
        puts(" error (invaild input)  :  ");
        break;
    }
    return 0;
}