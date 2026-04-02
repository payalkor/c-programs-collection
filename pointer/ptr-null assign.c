//Null asign to ptr
#include <stdio.h>
#include <stdlib.h>
//#include<conio.h>
void main()
{
    int *ptr;
    //ptr=NULL;
    ptr = (int *)realloc(ptr, 4); //4 =4 times I/P
                                  //ptr=(void*)realloc(void *ptr, size_t size);
    if (ptr == NULL)
    {
        printf("\n ptr is null");
    }
    else
    {
        printf("\n ptr is not null");
    }
    printf("\n %d", &NULL);
}