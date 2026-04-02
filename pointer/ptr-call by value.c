//fun ptr with cll by value
#include <stdio.h>
int add(int, int);
void main()
{
    int a, b, c, (*fp)(int, int);
    printf("\n enter values");
    scanf("%d%d", &a, &b);
    fp = add;
    c = (*fp)(a, b);
    printf("\n c=%d", c);
}

int add(int a, int b)
{
    int k;
    k = a + b;

    return k;
}
