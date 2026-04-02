#include<stdio.h>
int main ()
{
    char n;
    printf("\n enter a character.....");
    scanf("%c",&n);
    if (n>='0' && n<='9')
    printf("\n the character %c is digit..",n);
    else
    printf("\n the character %c isn't' digit..",n);
}