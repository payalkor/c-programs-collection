#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, i, j, **a, max, min;
    printf("Enter no. of rows and columns: ");
    scanf("%d%d", &m, &n);
    a = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }

    //Read elements into matrix
    printf("Enter %d matrix elements: ", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix elements are: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d ", a[i][j]);
        }
        printf("\n");
    }
    max = a[0][0];
    min = a[0][0];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
    printf("\n max=%d", max);
    printf("\n min=%d", min);
    free(a);
}
