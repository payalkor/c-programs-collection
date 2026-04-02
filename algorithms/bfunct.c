#include<stdio.h>
int bfun(int a[],int sk,int n);
int main()
{
    int a[12],i,n,sk,k,c;//mid,flag=0,L,U;
    printf("\n enter size:");
    scanf("%d",&n);
    printf("\n enter %d num of elements:",n):
    for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
         printf("\t%d",a[i]);
     }
      printf("\n enter the num that uh want to search:");
      scanf("%d",&sk);
     c=bfun(a,n,sk);
     if(a[c]==sk)
     {
    printf("\n Num %d is found at %d position:",sk,c);
     }
    else
     printf("\n Num isn't found");
}
int bfun(int a[],int n,int sk)
   {
     int L,U,mid;
     L=0;
      U=n-1;
     while(L<=U)
    {
         
        
         mid=(L+U)/2;
         if(a[mid]==sk)
           {
               return mid;
               break;
           }
         else
          if(a[mid]>sk)
            {
                U=mid-1;
            }
               else
               {
                   L=mid+1;
               }
     }
     //return flag;
   //  return mid
   }
  

         
         