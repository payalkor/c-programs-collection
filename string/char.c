#include <stdio.h>
#include <ctype.h>
int Chara();
void main()
{
    int p;
    p = Chara();

    {
        printf("\n Next charatcer =%d", p + 1);
    }
}
int Chara()
{
    int ch, k;
    printf("enter a chara...");
    scanf("%d", &ch);
    k = ch;
    if (isalnum(k))
        return k;
}
