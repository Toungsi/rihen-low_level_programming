#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n = rand() - RAND_MAX/2;
    if (n < 0)
    {
        printf("%d is negative", n);
    }else if ( n > 0)
    {
        printf("%d is positive", n);
    }else 
    {
        printf("%d is zero", n);
    }

    return 0;
}
