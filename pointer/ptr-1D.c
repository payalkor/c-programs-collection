//pointer of array
#include <stdio.h>
int main()
{
    int a[5] = {11, 30, 40, 50, 60}, (*ptr)[5], i;
    ptr = &a;
    printf("\nptr=%U", ptr);
    for (i = 0; i < 5; i++)
        printf("\n %d", (*ptr)[i]);
}