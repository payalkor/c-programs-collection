#include<stdio.h>
//merge sort 😘
void mergediv(int l,int u);
void mergesort(int l,int m,int u);
int a[20],n;
int main()
{
    int i;
    printf("\n enter size of array=");
    scanf("%d",&n);
    printf("\nenter %d elements in array=",n);     for(i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
             printf("%d|",a[i]);
         }
           mergediv(0,n-1);
      
}
void mergediv(int l,int u)
     {
         int m;
         if(l!=u)
            {
               printf("\n l=%d & u=%d",l,u);
               m=((u+l)/2);
                    {
                        printf("\n l=%d & m=%d",l,m);
                        mergediv(l,m);
                      //  printf("\n m+1=%d & u=%d",m+1,u);
                        mergediv(m+1,u);
                      printf("\n m+1=%d & u=%d",m+1,u);
                        mergesort(l,m,u);
                       printf("\n l=%d & m=%d & u=%d",l,m,u);
                    }
            }
     }
    void mergesort(int l,int m,int u)
       {
           int k=l,c[20],i=l,j=m+1;
          // printf("\n i=%d & j(m+1)=%d",i,j);
           while(i<=m && j<=u)
                {
                    if(a[i]<a[j])   
                      {                                        //printf("\ni=%d & j=%d",i,j);                     
                         c[k]=a[i];
                         i++;
                         k++;
                     }
                  else
                     {
                          c[k]=a[j];
                         j++;
                         k++;
                     }
              }
      while(i<=m)
              {
                  c[k]=a[i];
                  i++;
                  k++;
              }
         while(j<=u)
            {
                c[k]=a[j];
                j++;
                k++;
            }
  
   for(i=l;i<=u;i++)
       a[i]=c[i];
  
       }
           