#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, i, j, **ptr;
    printf("Enter no. of rows and columns: ");
    scanf("%d%d", &m, &n);

    //Allocate memory to matrix
    ptr = (int **)malloc(sizeof(int *));
    for (i = 0; i < n; i++)
    {
        ptr[i] = (int *)malloc(n * sizeof(int));
    }
    //Read elements into matrix
    printf("Enter matrix %d elements: ", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }
    //Print elements in the matrix
    printf("Matrix elements are: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", ptr[i][j]);
        }
        printf("\n");
    }
    //Dellocating memory of matrix
    
    free(ptr);
}