// Revers Order of elements in Array=1D
#include<stdio.h>
int main()
   {
       int i,a[10],n;
       printf("enter a size of n array..");
       scanf("%d",&n);
       printf("enter %d  elements in array..",n);
       for(i=0;i<n;i++)
           {
                
                 scanf("%d",&a[i]);  
                    
                    
           }
        printf("\n given array as follown");
        for(i=0;i<n;i++)
                    {
                     printf("\t%d",a[i]);
                    }
                 printf("\n Given aaray In revers");
        for(i=n-1;i>=0;i--)
                   {
                    printf("\t\a''%d''",a[i]);
                   }
   }
                  
                    
   
          