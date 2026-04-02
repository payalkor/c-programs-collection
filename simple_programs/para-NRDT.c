
 // 2] Yes parameter No RDT
#include<stdio.h>
void even( int n);
void main ()
    { 
        int n;
        printf("enter a num...");
        scanf("%d",&n);
        
        even(n);
    }
    void even(int n)
        {
           
             if(n%2==0)
                {
                    printf("\t%d is even",n);
                }
             else
               {
                   printf("\t %d is not even",n);
               }
        }