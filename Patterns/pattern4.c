#include<stdio.h>
void main ()
    {
        //Prrocess
        int i,j,n,m;
        printf("enter 2 num...");
        scanf("%d%d",&n,&m);
        for (i=0;i<n;i++)
              {
                  for (j=0;j<m;j++)
                         {
                             if(i==0 || j==0 || i==n-1 || j==m-1 || i==j || i+j==m-1)
                             printf("\t*");
                             else
                             printf("\t");
                         }
                         printf("\t\n");
              }
    }