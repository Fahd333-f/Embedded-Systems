#include <stdio.h>
#define MAX_TEMP 100
void check_temperature(int temp);
int main()
{
    int temp;
    printf("Enter the temp : \n");
    scanf("%d", &temp);
    check_temperature(temp);
}
void check_temperature(int temp)
{
    if (temp > MAX_TEMP)
    {
        printf("Danger : \n");
    }
    else
    {
        printf("Safe : \n");
    }
}