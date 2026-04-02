  /*   1    2     3
               4     5
                      6    */

#include<stdio.h>
void main ()
   {
       int i,n,j;
       printf("enter a num of r & c...");
       scanf("%d",&n);
       
       for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                      {
                          if(j>=i)
                          printf("\t*");
                          else
                          printf("\t");
                      }
                      printf("\n");
            }
   }
       