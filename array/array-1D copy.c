#include <stdio.h>
int main()
{
    int m, n, i, j, a[10][10], b[10][10];
    printf("\n enter no of rows & column");
    scanf("%d%d", &m, &n);
    printf("\n enter %d elements in a array", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n given matrix has an follow");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    printf("\n copy of a above matrix");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[i][j];
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
}
