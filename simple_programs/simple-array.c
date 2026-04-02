#include<stdio.h>
void main ()               //Simple Array
  {
      int i,j,n,a[2][2];
      printf("enter n ....");
      scanf("%d",&n);
      printf("enter %d element in array",n*n);
      for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                      {
                          scanf("%d",&a[i][j]);
                      }
            }
            for(i=0;i<n;i++)
                 {
                     for(j=0;j<n;j++)
                         {
                             printf("\t%d",a[i][j]);
                         }
                         printf("\n");
                 }
                 
  }