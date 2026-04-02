#include<stdio.h>
#include<conio.h>
void main ()
   {
       int n,i,j,k,k1;
       printf("enter no of r & c......");
       scanf("%d",&n);  
       k=65;     
       for(i=0;i<n;i++)
       
             {
                
                 for(j=0;j<=i;j++)
                 
                       {
                          
                          if(i%2==0)
                          printf("*");
                          else
                          {
                          
                          printf("%c",k);
                          k++;
                          }
                          printf("\n");
                        
                          
                       }
                       
                       
             }
   }
