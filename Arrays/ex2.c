#include <stdio.h>
void take_array_2d();
void print_array_sum();
struct point
{
    int x;
    int y;
};
int arr[3][10];
int main()
{
    // take_array_2d();
    // print_array_sum();
    struct point a;
    a.x = 10;
    a.y = 20;
    printf("the a.x=%d and a.y=%d\n", a.x, a.y);
}
void take_array_2d()
{
    for (int i = 0; i < 3; i++)
    {
        for (int f = 0; f < 10; f++)
        {
            printf("Enter the array number %d in the place of  place number %d   : ", i, f);
            scanf("%d", &arr[i][f]);
        }
    }
}
void print_array_sum()
{

    for (int i = 1; i <= 3; i++)
    {
        int sum = 0;
        for (int x = 0; x < 10; x++)
        {
            sum += arr[i][x];
        }
        printf("the sum of array[%d] is %d :\n", i, sum);
    }
}