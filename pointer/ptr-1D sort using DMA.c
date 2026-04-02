//sorting an array using poniter
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, n, i, pass, temp;
    printf("\n enter no..");
    scanf("%d", &n);
    ptr = (int *)malloc(sizeof(int)); //array
    printf("\n enter %d elements", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("\n before solting");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    for (pass = 0; pass < n; pass++)
    {
        for (i = 0; i < n; i++)
        {
            if (*(ptr + i) > *(ptr + (i + 1)))
            {
                *(ptr + i) = *(ptr + i) - *(ptr + (i + 1));
                *(ptr + (i + 1)) = *(ptr + i) + *(ptr + (i + 1));
                *(ptr + i) = *(ptr + (i + 1)) - *(ptr + i);
            }
        }
    }
    printf("\n after solting");
    {
        for (i = 0; i < n; i++)
        {
            printf("\t%d", *(ptr + i + 1));
        }
    }
}