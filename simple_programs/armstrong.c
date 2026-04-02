

#include<stdio.h>
void main ()
   {
      int n,rem,sum; 
      printf("enter a no....");
      scanf("%d",&n);
      sum=0;
      n1=n;
      while(n>0)
                {
                       rem=n%10;
                       printf("\n\v...%d",rem);
                       sum=sum+rem*rem*rem;
                        n=n/10;                            
                }
             
                 printf("\nthe sum of a digit no is  %d",sum);
                 if(n==sum)
                     {
                      printf("\n no %d is armstrong);
                     }
                  else
                     {
                      printf("\n no is not armstong");       
                    } 
   }
   
                           

