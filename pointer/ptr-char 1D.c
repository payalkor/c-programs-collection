#include <stdio.h>

int main()
{
    char name[30], *ptr;
    int i;

    //int i;
    //ptr=name;
    printf("\nenter name");
    scanf("%s", &name);
    ptr = name;

    for (i = 0; i < 7; i++)
    {
        printf("\n %c", *(ptr + i));
    }
}