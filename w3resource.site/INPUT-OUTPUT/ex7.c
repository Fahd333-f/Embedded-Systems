#include <stdio.h>

void scan_function(char arr_1[], char arr_2[], int *birth_day);
void print_function(char arr_1[], char arr_2[], int birth_day);

int main()
{
    char arr_2[50];
    char arr_1[50];
    int birth_day;
    scan_function(arr_1, arr_2, &birth_day);
    print_function(arr_1, arr_2, birth_day);

    return 0;
}
void scan_function(char arr_1[], char arr_2[], int *birth_day)
{

    printf("Enter the first name \n");
    scanf("%s", arr_1);
    printf("Enter the last name : \n");
    scanf("%s", arr_2);
    printf("Enter your birth day : \n");
    scanf(" %d", birth_day);
}
void print_function(char arr_1[], char arr_2[], int birth_day)
{
    printf("%s %s %d :\n", arr_1, arr_2, birth_day);
}
