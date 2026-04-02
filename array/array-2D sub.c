#include <stdio.h>

int main()
{
    int m, n, i, j, a[10][10], b[10][10], c[10][10];
    printf("\n enter no of rows & column");
    scanf("%d%d", &m, &n);
    printf("\n enter %d elements in array", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n entet %d elements in 2nd array", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\n sub of array a&b");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
}
