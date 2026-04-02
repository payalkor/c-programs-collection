
 // 3] No parameter Yes RDT 
#include<stdio.h>
int even();
void main ()
    {
         int k;
         k= even();
         if(k==1)                  
        printf("\t even");           
        else          
        printf("\t not even");
          
    }
    
    int even()
        {
            int n;
            printf("enter a num...");
            scanf("%d",&n);
             if(n%2==0)               
             return 1;                
             else                
              return 0;
        }               
              
                    
        