//Array of pointer
#include<stdio.h>  
int main ()
{
    int a[]={11,30,40,50,60},*ptr,i;
    ptr=a;
   
    for(i=0;i<5;i++)
      {
          printf("\n %d",*(ptr+i));
      }
}