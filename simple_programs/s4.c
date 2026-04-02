#include<stdio.h>
void main ()
     {
         int i,n,sum;
         printf("\nenter a no\n....");
         scanf("%d",&n);
         sum=0;
         i=1;
         while(i<=n)
                   {
                       if(i%2==1)
                          {
                               sum=sum+i;
                               printf("\\%d,",i);
                               
                          }
                      i++;
                   }
                   printf("\n\tsum=%d",sum);
                   
                   
     }
                   
         
         