
 // 4] Yes Parameter Yes RDT
#include<stdio.h>
int even(int );
void main ()
    {   
        int n,k;
        printf("enter a num...");
        scanf("%d",&n);
        
        k=even( n);
        
        if(k==1)        
        printf("\t%d even",n);           
        else           
        printf("\t%d not even",n);
           
    }
     int even(int n)
        {
           
             if(n%2==0)              
             return 1;                
             else                
             return 0;
                
        }