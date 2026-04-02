#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Allocate memory for 10 integers
    int *ptr = (int *)malloc(sizeof(int)), i;
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    ptr[4] = 5;
    ptr[5] = 6;
    ptr[6] = 7;
    ptr[7] = 8;
    ptr[8] = 9;
    ptr[9] = 10;
    // Reallocate memory for 15 integers
    ptr = (int *)realloc(ptr, 15 * sizeof(int));

    for (i = 9; i < 15; i++)
    {
        ptr[i] = i + 1;
        //scanf("%d",ptr+i);
    }
    for (i = 0; i < 15; i++)
        printf("\n\t%d ", *(ptr + i));
    free(ptr);
    return 0;
}