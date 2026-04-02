//realloc exn
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *n;
    n = (int *)malloc(sizeof(int));
    n[0] = 11;
    n[1] = 2;
    n[2] = 3;

    // resize the memory block to hold 5 integers
    n = (int *)realloc(n, 15);
    n[3] = 4;
    n[4] = 21;

    for (i = 0; i < 5; i++)
    {
        printf("\n\t%d ", n[i]);
    }

    free(n);
    return 0;
}