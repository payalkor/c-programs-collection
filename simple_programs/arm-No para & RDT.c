
// 1] No para No RDT = Armstrong


#include<stdio.h>
void Armstrong();
void main()
       {
           Armstrong();
       }
  void Armstrong()
        {
            int n,n1,sum=0,rem;
            printf("enter a num...");
            scanf("%d",&n);
            n1=n;
            while(n>0)
                  {
                      rem=n%10;
                      sum=sum+rem*rem*rem;
                      n=n/10;
                  }
                  if(sum==n1)
                     printf("num is armstorng");
                 else
                     printf(" num is not armstorng");
        }