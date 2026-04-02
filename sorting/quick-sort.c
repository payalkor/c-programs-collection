#include<stdio.h>
void quicksort(int l,int u);
int a[30];
int main()

{
    int i,n;
    printf("\n enter size of array=");
    scanf("%d",&n);
    printf("\nenter %d elements in array=",n);     for(i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
             printf("%d|",a[i]);
         }
       quicksort(0,n-1);
       printf("\n sorted Array:");
   for(i=0;i<n;i++)
         {
             printf("%d|",a[i]);
         }
}
void quicksort(int l,int u)
   {
       int i,j,t,pi;
       if(l<u)
          {
              i=l+1;
              j=u;
              pi=a[l];
              while(i<=j)
                  {
                      
                      while(pi>=a[i] && i<=u)
                        {
                        i++;                    
                        }
                      while(pi<a[j] && j>=l)
                         {
                        j--;
                         }

                        if(i<j)//Postion only
                           {
                               printf("\na[i]=%d & a[j]=%d",a[i],a[j]);
                               t=a[i];
                               a[i]=a[j];
                               a[j]=t;
                           }
                  }
                  
            printf("\npi=%d",pi);
              a[l]=a[j];""
              a[j]=pi;
              
              quicksort(l,j-1);
              
              quicksort(j+1,u);
          }
   }