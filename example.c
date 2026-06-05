#include <stdio.h>

int main()
{
    int i;

    printf("Numbers from 1 to 10 (skip 5, stop at 9):\n");

    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            continue; 
        }

        if(i == 9)
        {
            break; 
        }

        printf("%d ", i);
    }

    printf("\nDone\n");

    return 0;
}