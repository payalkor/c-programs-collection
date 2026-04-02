
   // 1] No parameter No R.D.T
#include<stdio.h>
void even();
void main ()
    {
        even();
    }
    void even()
        {
            int n;
            printf("enter a num...");
            scanf("%d",&n);
             if(n%2==0)
                {
                    printf("%d is even",n);
                }
             else
               {
                   printf(" %d is not even",n);
               }
        }