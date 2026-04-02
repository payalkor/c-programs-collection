
// Yes Para Yes RDT = Maxi
#include <stdio.h>
int max(int, int, int);
void main()
{
    int a, b, c, k;
    printf(" enter 3 num.....");
    scanf("%d%d%d", &a, &b, &c);
    k = max(a, b, c);

    printf("\t max %d", k);
}

int max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)

            return a;

        else

            return c;
    }
    else if (b > c)

        return b;

    else

        return c;
}