#include<stdio.h>
//Insertion sort
int insersort(int a[],int n);
int main()
{
    int i,k,n,a[50];
    printf("\n enter size of array:");
    scanf("%d",&n);
    printf("\n entwr %d elements in array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d|",a[i]);    
    }
       k=insersort(a,n);
      printf("\n sorted Array:");
   for(k=0;k<n;k++)
         {
             printf("%d|",a[k]);
         }
}
   
 int insersort(int a[],int n)  
     {
         int key,i,j;
         for(i=1;i<n;i++)
       
       {
           key=a[i];
          //    printf("\n==%d",j);
                 for(j=i-1;j>=0 && key<a[j];j--)
                     {
                         printf("\n=%d",j);                             
                         a[j+1]=a[j];
                              
                     }
            
                   a[j+1]=key;
           
                          
           }
         return i;
                                                                                                                          
              
         
                                                                                                                                                                                              
      }