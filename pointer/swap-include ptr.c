#include<stdio.h>
#include<stdlib.h>
void swap1(int,int);
void swap2(int *,int *);
int main ()
  {
      int a=4,b=9;
      void swap1(int a,int b);
      void swap2(int *ptr1,int *ptr2);
      printf("\n before swapping:a=%d,b=%d",a,b);
      swap1(a,b);
      printf("\n After swapping by swap 1:a=%d,b=%d",a,b);
      swap2(&a,&b);
      printf("\n After swaping by swap 2:a=%d,b=%d",a,b);
  }
  void swap1(int a,int b)
     {
         int temp;
         temp=a;
         a=b;
         b=temp;
     }
 void swap2(int *ptr1,int *ptr2)
    {
        int temp;
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
    }
    
        