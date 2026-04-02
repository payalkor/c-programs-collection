//Searching Of An elemente = 1D
#include <stdio.h>
int main()
{
    int i, a[10], n, sk, flag = 0;
    printf("enter num of elements");
    scanf("%d", &n);
    printf("enter %d  elements in array..", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\nwhich num uh want to search..");
    scanf("%d", &sk);
    for (i = 0; i < n; i++)
    {
        if (sk == a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("\n\tNun found at position of array %d", i);
    else
        printf("\n\tNun is not found at position of array %d ", i);
}
