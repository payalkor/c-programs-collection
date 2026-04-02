//simple Revers characters
#include <stdio.h>
int main()
{
    char a[10];
    int i, n;

    printf("\n How many chara uh want to enter..");
    scanf("%d", &n);

    printf("\n enter %d num of characters in array..", n);

    for (i = 0; i < n; i++)
    {
        printf("\n enter Chara at a[%d]", i);

        scanf("\n%c", &a[i]);
    }
    printf("\n Given chara array as follows\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%c ", a[i]);
    }
}
