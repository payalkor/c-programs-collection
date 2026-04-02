//pallindrom
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int n, i, *ptr, sum = 0, rev, rem, p;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    //flushall(stdin);
    fflush(stdin);
    ptr = (int *)malloc(sizeof(int));
    printf("\n Enter %d elements of array ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("\n Given array as an follow:");
    for (i = 0; i < n; i++)
    {
        printf("\n\t%d", ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        p = ptr[i];

        while (ptr[i] > 0)
        {
            rem = ptr[i] % 10;
            rev = rev * 10 + rem;
            ptr[i] = ptr[i] / 10;
        }

        if (p == rev)
            printf("\n %d is pallindrom", p);
        else
            printf("\n %d is not pallindrom", p);
    }
    fflush();
}