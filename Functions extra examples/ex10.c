#include <stdio.h>
static inline int get_min(int a, int b)
{
    return (a > b) ? (b) : (a);
    /*
 Why inline is safer than macros?
 1. Type Checking: Inline functions check the data types of arguments. Macros don't care, they just copy-paste text.
 2. Side Effects: If we use a macro like MIN(a++, b), it expands to ((a++ > b) ? (b) : (a++)), causing 'a' to increment twice! Inline functions evaluate arguments only ONCE before passing them.
*/
}
int main()
{
    int number_x, number_y;
    printf("Enter the two numbers : \n");
    scanf("%d%d", &number_x, &number_y);
    printf("the min is %d : \n", get_min(number_x, number_y));
    return 0;
}