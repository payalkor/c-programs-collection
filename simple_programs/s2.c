#include<stdio.h>
int main ()
{
    char c,c1;
    printf("\n enter a character.....");
    scanf("%ch",&c);
    c= tolower (c);
    if (c=='a' || c=='e' || c=='i' || c== 'o' || c=='u')
    printf(" \n the character %c is vowel",c);
    else
    printf("\n the character %c isn't vowel",c);
}