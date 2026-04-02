#include<stdio.h>
#include<conio.h>
void main ()
   {
       int i,j,n,a[5][5],max=0,min=0;
       printf("enter a num of n...");
       scanf("%d",&n);
       for(i=0;i<n;i++)
             {
                 for (j=0;j<=n;j++)
                      {
                          if(max<a[i][j])
                             {
                               max=a[i][j];
                             }
                         else
                             min=a[i][j];
                             
                         
                          
                      }
             }
             printf("max of given matrix %d",max);
            
            printf("Min og given matrix %d",min);
   }
                      
      
       
