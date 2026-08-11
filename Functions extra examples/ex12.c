#include <stdio.h>

void track_calls();

int main()
{

    track_calls();
    track_calls();
    track_calls();
    track_calls();

    return 0;
}

void track_calls()
{
    
    static int calls = 0;

    calls++;
    
    printf(" call number %d\n", calls);
}