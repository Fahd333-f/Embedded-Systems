#include <stdio.h>
int counter = 0;  // global varaible
void counter_x(); // declaration
int main()
{
    counter_x(); /* function defination*/
    counter_x();
    counter_x();
    printf("%d", counter);
}
void counter_x()
{
    counter++;
}