#include <stdio.h>
int main()
{
    int m, n, i, j, a[10][10], flag = 0;
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
    printf("\n 2D array as follows\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", a[j][i]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)
            {
                if (a[i][j] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }
    if (flag == 0)
        printf("\nGiven matrix is upper triangular");
    else
        printf("\n Given matrix is not upper triangular");
}
