// Yes para Yes RDT=Pallendrom
#include<stdio.h>
int palle(int);
void main ()
    {
        int n,k;
        printf("enter a no....");
        scanf("%d",&n);
        
       k=palle(n);
       if(n==k)
          printf("No is pallendrom");
      else
          printf("No is not pallendrom");
    }
    
    int palle(int n)
          {
              int rev=0,rem;
             
               while (n>0)
                {
            
                  rem=n%10;
                  rev=rev*10+rem;
                  n=n/10;
                }
            
        
         return rev;
        }
         
         
        