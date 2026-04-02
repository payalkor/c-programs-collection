// Array=even + cnt....
#include<stdio.h>
void main ()        
  {
      int i,j,n,a[2][2],cnt;
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
                             if(a[i][j]%2==0)
                                {
                                    printf("\t%d",a[i][j]);
                                    cnt ++;
                                }
                         }
                         printf("\n");
                 }
                 printf("sum of num %d",cnt);
  }                          