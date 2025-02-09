#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int n = rand() - RAND_MAX/2;

    printf("le nombre est : %d\n", n);

    // récuperer le dernier chiffre 
    int last_n = n % 10;

    if (last_n > 5)
    {
        printf("%d is greater than 5 \n",last_n);
    }else if (last_n == 0)
    {
        printf("%d is 0 \n",last_n);
    }else if (last_n < 6 && n != 0)
    {
        printf("%d is less than 6 and not 0 \n",last_n);
    }

    return 0;
    
}