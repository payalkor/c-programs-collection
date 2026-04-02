
//process
#include<stdio.h>
void main ()
  {
      int i,j,k,n,L;
      printf("enter r & c...");
      scanf("%d",&n);
      L=80;
      k=80;
      for(i=0;i<n;i++)
           {
               k=L;
               for (j=0;j<n-i;j++)
                      {
                       printf("\t%c",k);
                          
                           k=k+4-j;
                      }
                        
                        L++;
                        printf("\n");
                        
                       
           }
