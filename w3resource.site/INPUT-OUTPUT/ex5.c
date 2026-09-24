#include <stdio.h>
void total_minuts_function(int hours, int minutes);
int main()
{
    int hours, minutes;
    printf("Enter the hours : \n");
    scanf("%d", &hours);
    printf("Enter the minutes : \n");
    scanf(" %d", &minutes);
    total_minuts_function(hours, minutes);
    return 0;
}
void total_minuts_function(int hours, int minutes)
{
    printf("The total numbers is %d : \n", (hours * 60) + minutes);
}