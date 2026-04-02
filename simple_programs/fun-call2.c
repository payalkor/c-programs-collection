//with before main
#include<stdio.h>
#include<conio.h>
void Add()
      {
          int a,b,c;
          printf("enter a no.....");
          scanf("%d%d",&a,&b);
          
          c=a+b;
          printf("%d",c);
      }
      void main ()
          {
              Add() ;
              
              getch();
          }
              