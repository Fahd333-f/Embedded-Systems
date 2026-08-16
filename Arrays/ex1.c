#include <stdio.h>
void print_array(int arr[], int size);
void scan_array(int arr[], int size);
int sum_array(int arr[], int size);
int avg_array(int arr[], int size);
int max_array(int arr[], int size);
int min_array(int arr[], int size);
void sec_max_array(int arr[], int size);
void print_negative_postive_elements(int arr[], int size);
void count_odd(int arr[], int size);
void count_even(int arr[], int size);
void print_all_unique_elements(int arr[], int size);
void reverse_all_array(int arr[], int size);
int main()
{
    int arr[5];
    scan_array(arr, 5);
    print_array(arr, 5);
    printf("%d is the sum of array \n", sum_array(arr, 5));
    printf("%d is the average of array \n", avg_array(arr, 5));
    printf("%d is the largest number of array \n", max_array(arr, 5));
    printf("%d is the smallest number of array \n", min_array(arr, 5));
    sec_max_array(arr, 5);
    print_negative_postive_elements(arr, 5);
    count_odd(arr, 5);
    count_even(arr, 5);
    print_all_unique_elements(arr, 5);
    reverse_all_array(arr, 5);
}
void scan_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element : ");
        scanf("%d", &arr[i]);
    }
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("the element is %d : \n", arr[i]);
    }
}
int sum_array(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int avg_array(int arr[], int size)
{
    int average = 0;
    average = (float)sum_array(arr, size) / size;
    return average;
}
int max_array(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (largest <= arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
}
int min_array(int arr[], int size)
{
    int smallest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (smallest >= arr[i])
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
void sec_max_array(int arr[], int size)
{
    int largest = arr[0];
    int sec_largest = 0;
    for (int i = 0; i < size; i++)
    {
        if (largest <= arr[i])
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest)
        {
            sec_largest = arr[i];
        }
    }
    printf("the second max number is %d\n", sec_largest);
}
void print_negative_postive_elements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            printf("negative number : %d\n", arr[i]);
        }
        else
        {
            printf("postive number : %d\n", arr[i]);
        }
    }
}
void count_odd(int arr[], int size)
{
    int i = 0;
    int count = 0;
    while (i < size)
    {
        if ((arr[i] % 2) != 0)
        {
            count++;
        }
        i++;
    }
    printf("the number odd numbers is %d\n", count);
}
void count_even(int arr[], int size)
{
    int i = 0;
    int count = 0;
    while (i < size)
    {

        if ((arr[i] % 2) == 0)
        {
            count++;
        }
        i++;
    }
    printf("the number even numbers is %d\n", count);
}
void print_all_unique_elements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int is_unique = 1;

        for (int count = 0; count < size; count++)
        {
            if (i == count)
            {
                continue;
            }

            if (arr[i] == arr[count])
            {
                is_unique = 0;
                break;
            }
        }

        if (is_unique == 1)
        {
            printf("%d is the unique number\n", arr[i]);
        }
    }
}
void reverse_all_array(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {

        int temp_2 = size - i - 1;

        int temp = arr[i];

        arr[i] = arr[temp_2];

        arr[temp_2] = temp;
    }

    print_array(arr, size);
}