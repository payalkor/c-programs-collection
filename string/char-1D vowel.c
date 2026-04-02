//Vowel In Array Using Function
#include <stdio.h>
void vowe(int n, char a[]);
void main()
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
    printf("\n Given chara array as follows:\n");
    for (i = 0; i < n; i++)
    {
        printf("\t%c ", a[i]);
    }

    vowe(n, a);
}
void vowe(int n, char a[])
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (a[i] == 'i' || 'o')
            printf("\n The Given Character %c is vowel", a[i]);
        else
            printf("\n The Given Character %c is consonant", a[i]);
    }
}
