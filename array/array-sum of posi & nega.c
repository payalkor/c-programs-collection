//sum of +ve & -ve num
#include <stdio.h>
int main()
{
    int i, a[10], n, psum = 0, nsum = 0;
    printf("enter a size of n array..");
    scanf("%d", &n);
    printf("enter %d  elements in array..", n);
    for (i = 0; i < n; i++)

        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)

        printf("\t%d", a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
            psum = psum + a[i];
        else
            nsum = nsum + a[i];
    }
    printf("\n sum of all + ve= %d", psum);
    printf("\n sum of all -ve= %d", nsum);
}