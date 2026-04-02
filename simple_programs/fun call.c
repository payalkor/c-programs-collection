 // with after main
// Addition With Function Call
#include<stdio.h>
#include<conio.h>
void Add();
void main ()
    {
        
        Add();
        getch();
    }
    void Add()
      {
          int a,b,c;
          printf("enter a no.....");
          scanf("%d%d",&a,&b);
          
          c=a+b;
          printf("%d",c);
      } 