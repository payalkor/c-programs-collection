#include<stdio.h>
#include<conio.h>
void main ()
    {
        int i,j,n,m,a[5][5],b[5][5],sum=0;
        printf("enter a num of n & m.....");
        scanf("%d%d",&n,&m);
        printf("\nenter array in A %d elements",m*n);
        printf("enter a num of n & m.....");
        scanf("%d%d",&n,&m);        
        printf("\nenter array in B %d elements",m*n);
        
        for(i=0;i<n;i++)
              {
                  for(j=0;j<m;j++)
                        {
                            scanf("%d%d",&a[i][j],&b[i][j]);
                        }
              }
       for(i=0;i<n;i++)
             {
                 for (j=0;j<=m;j++)
                      {
                            
                               {
                                 printf("\n\t%d%d",a[i][j],b[5][5]);
                                sum=sum+a[i][j]+b[i][j];
                               }
                      }
                        printf("\n\tsum of all %d",sum);
              }
    }