#include <stdio.h>
int main()
{
    int m, n, i, j, a[10][10], b[10][10], sum = 0, c[i][j];
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
    printf("\n enter %d elements in b array", m * n);
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
            sum = sum + a[i][j] + b[i][j];
        }
    }
    printf("\n sum of matrix is %d", sum);
}