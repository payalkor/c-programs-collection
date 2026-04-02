#include<stdio.h>
#include<conio.h>
 void main()
     {
         int i,sum,n;
         for(n=1;n<10000;n++)
              {
                           sum=0;
                           for(i=1;i<n;i++)
                                {
                                    if(n%i==0)
                                     sum=sum+i;
                                }
                                if(n==sum)
                           
                           printf("\n the num=%d is perfect",n);
              }
              getch();
     }
                               
                                
         
         
         
         
         
         
   
   
   
                   
              
                    
       