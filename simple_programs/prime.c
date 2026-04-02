#include<stdio.h>
#include<conio.h>
void main ()
     {
         int i,n,flag;
         printf("enter a no...");
         scanf("%d",&n);
         flag=0;
         for(i=2;i<n;i++)
              {
                  if(n%i==0)
                    {
                        flag=1;
                        break;
                    }
                    if (flag=1)
                        {                       
                          printf("the no is not prime");
                        }
                    else
                      {
                        printf("the no is a prime");
                      }
              }
                       
              
              getch();
     }
              
         