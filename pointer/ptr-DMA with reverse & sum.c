//program of  Dynamic memeroy allocation with reverse & sum⚡
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr, n, i, sum = 0;
    printf("\n enter no..");
    scanf("%d", &n);
    ptr = (int *)malloc(sizeof(int)); //array
    printf("\n enter %d elements", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
    printf("\n array elements\n");
    for (i = 0; i < n; i++)
    {
        printf("\n \t%d", *(ptr + i));
        //sum=*(ptr+i)+sum;
    }
    free(*ptr);

    printf("\n reverse aaray");
    for (i = n - 1; i >= 0; i--)
    //printf("\n sum = %d",sum);
    {
        printf("\n \t%d", *(ptr + i));
    }
}
