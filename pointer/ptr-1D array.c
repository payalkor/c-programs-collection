#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m, i, j, **ptr; //sum1=0,sum2=0;//max
    printf("Enter number of n and m: ");
    scanf("%d%d", &n, &m);
    ptr = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        ptr[i] = (int *)malloc(m * sizeof(int));
    }
    printf("\n Enter %d elements of array ", n * m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }
    printf("\nGiven array as an follow:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("\t%d", ptr[i][j]);
        }

        printf("\n");
    }
}
