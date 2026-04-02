#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],*ptr1,s2[30],*ptr2;
    printf("\n enter string:");
    gets(s1);
    ptr1=s1;
    ptr2=s2;
    //for(int i=0;s1[i];i++)
    while(*ptr1)
       {
         //  printf("%c",s1[i])
          *ptr2=*ptr1;
         ptr1++;
        ptr2++;
       }
  printf("%s",s2);
}