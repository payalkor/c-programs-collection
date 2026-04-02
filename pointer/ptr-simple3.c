#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *n, s, i;
    printf("size=%d", sizeof(*n));
    n = (int *)malloc(sizeof(int));
    for (i = 0; i < 2; i++)
    {
        scanf("\n%d", n + i);
    }
    printf("\n enter to upgreade size");
    scanf("%d", &s);

    //n= realloc(n,s);
    //  n=realloc(n,new sizeof(s));
    n = (int *)realloc(n, s * sizeof(int));
    for (i = 0; i < 2; i++)
    {
        printf("\n%d", n + i);
    }

    printf("\n real size=%d", sizeof(*n));

    return (0);
}