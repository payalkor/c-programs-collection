#include <stdio.h>
int main()
{
    int m, n, i, j;
    float a[10][10];
    printf("\n enter no..");
    scanf("%d", &n);
    printf("\n enter %d elements in array", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i][j]);
    }
    printf("\n 2D array as follows\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i][j]);

        printf("\n");
    }
    for (i = n - 1; n >= 0; n--)
    {
        printf("\t%d", a[i][j]);
    }
    printf("\n");
}
