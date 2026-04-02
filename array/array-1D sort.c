// Sorting Of array = 1D
#include<stdio.h>
int main()
   {
       int i,a[10],n,pass,Temp;
       printf("\nenter a size of n array..");
       scanf("%d",&n);
       printf("\nenter %d  elements in array..",n);
       for(i=0;i<n;i++)
           {
                
                 scanf("%d",&a[i]);  
                    
                    
           }
        printf("\nbefore array solting");
        for(i=0;i<n;i++)
                    {
                     printf("\t%d",a[i]);
                    }
        for(pass=1;pass<=n;pass++)
             {
                 for(i=0;i<n-pass;i++)
                      {
                          if(a[i]>a[i+1])
                             {
                                 Temp=a[i];
                                 a[i]=a[i+1];
                                 a[i+1]=Temp;
                             }
                      }
             }
         printf("\nAfter Solting");
                   for(i=0;i<n;i++)
                        printf("\t %d",a[i]);
             
   }