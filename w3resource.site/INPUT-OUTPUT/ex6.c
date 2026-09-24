#include <stdio.h>
void Convert_Minutes_to_Hours_and_Minutes(int minutes);
int main()
{
    int minutes = 0;
    printf("Enter the minutes : \n");
    scanf("%d", &minutes);
    Convert_Minutes_to_Hours_and_Minutes(minutes);
    return 0;
}
void Convert_Minutes_to_Hours_and_Minutes(int minutes)
{
    int hours = minutes / 60;
    int minutes_2 = minutes % 60;
    printf("the hours and minutes is %d , %d : \n", hours, minutes_2);
}
