
//Bubble sort(function)
#include<stdio.h>
int bubbl(int a[],int n);
int main()
{
    
    int a[20],n,i,j;
    printf("\n enter size of array:");
    scanf("%d",&n);
    printf("\n enter %d elements in array:",n);    for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
           printf("%d|",a[i]);
       }
      j=bubbl(a,n);
       printf("\n sorted array:");
        for(j=0;j<n;j++)
        
       printf("%d|",a[j]);
}
int bubbl(int a[],int n)
     {
          int pass,i,temp;
         for(pass=0;pass<n;pass++)
         {
             for(i=0;i<n-1;i++)
                  {
                      if(a[i]>a[i+1])
                         {
                            temp=a[i];
                            a[i]=a[i+1];
                            a[i+1]=temp;
                         }
                  }
         }
         return i;
        
}
                            