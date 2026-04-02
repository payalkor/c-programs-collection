#include <stdio.h>
int main()
{
    int i, a[10], n, esum = 0, osum = 0;
    printf("enter a size of n array..");
    scanf("%d", &n);
    printf("enter %d  elements in array..", n);
    for (i = 0; i < n; i++)
    {
        printf("\n enter array ele a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("\n given array as follown");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            esum = esum + a[i];
        else
            osum = osum + a[i];
    }
    printf("\n sum of all even = %d", esum);
    printf("\n sum of all odd = %d", osum);
}
