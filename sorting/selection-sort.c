#include<stdio.h>
//Selection Sort(function)
int selesort(int a[],int n);
int main()
{
    int i,min,j,a[20],n,k;
    printf("\n enter size of array:");
    scanf("%d",&n);
    printf("\n entwr %d elements in array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d|",a[i]);
    }
   k= selesort(a,n);
   printf("\n sorted Array:");
   for(k=0;k<n;k++)
         {
             printf("%d|",a[k]);
         }
}
int selesort(int a[],int n)
      { 
          int temp,i,j,min;      
         for(i=0;i<n;i++)
       
       {
           min=i;
             
                 for(j=i+1;j<n;j++)
                     {
                        if(a[min]>a[j])
                        {
                           min=j;
                        }
                     }                                                                                                       
                        temp=a[min];
                        a[min]=a[j];
                        a[j]=temp;
             }                                                                                                                                                            return i;                               
      }
       
             
       

                                