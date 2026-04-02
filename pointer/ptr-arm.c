#include <stdio.h>
#include <stdlib.h>
//pending......🤧
int main()
{
    int n, i, *ptr, rem, sum = 0, c = 0, p; //sum1=0,sum2=0;//max
    printf("Enter number of elements: ");
    scanf("%d", &n);
    fflush(stdin);
    ptr = (int *)malloc(sizeof(int));
    printf("\n Enter %d elements of array ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("\n Given array as an follow:");
    for (i = 0; i < n; i++)
    {
        printf("\n\t%d", ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        p = ptr[i];

        while (ptr[i] > 0)

        {
            rem = ptr[i] % 10;
            sum = sum + rem * rem * rem;
            ptr[i] = ptr[i] / 10;
        }
        if (p == sum)

            printf("\n %d is arm", p);

        else

            printf("\n %d is not arm", p);
    }
}
