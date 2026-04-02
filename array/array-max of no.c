//Max Of No = 1D
#include<stdio.h>
int main()
   {
       int i,a[10],n,max;
       printf("enter a size of n array..");
       scanf("%d",&n);
       printf("enter %d  elements in array..",n);
       for(i=0;i<n;i++)
           {
                
                 scanf("%d",&a[i]);  
                    
                    
           }
      
        for(i=0;i<n;i++)
                    {
                     printf("\t%d",a[i]);
                    }
        max=a[0];
        for(i=0;i<n;i++)
                   {
                       if(max<a[i])
                       max=a[i];
                   }
                   printf("\nmax=%d",max);
   }
                       