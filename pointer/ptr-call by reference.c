//address same in call by reference
#include <stdio.h>
void add(int **, int **);
void main()
{
    int *p, *h, a = 4, b = 2;
    p = &a;
    h = &b;
    //printf("\n enter a & b");
    //scanf("%d%d",&p,&h);
    printf("\n &p=%u", p);
    printf("\n &h=%u", h);

    add(&p, &h);
}
void add(int **p, int **h)
{
    int **c;
    printf("\n &p=%u", *p);
    printf("\n &h=%u", *h);
    // *c=*p+*h;
}