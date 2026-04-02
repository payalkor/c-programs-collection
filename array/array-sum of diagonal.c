//Array=sum of diagonals ele..
#include<stdio.h>
void main ()
     {
         int n,a[3][3],sum=0,i,j;
         printf("enter a num..");
         scanf("%d",&n);
         printf("enter array %d elements",n*n);
         for(i=0;i<n;i++)
             {
                 for (j=0;j<n;j++)
                      {
                          scanf("%d",&a[i][j]);
                      }
             }
         for(i=0;i<n;i++)
             {
                 for (j=0;j<n;j++)
                      {
                          if(i==j)
                             {
                                 printf("\t%d",a[i][j]);
                                 sum=sum+a[i][j];
                             }
                      }
             }
             printf("\n\tsum of diagonals ele is %d",sum);
     }