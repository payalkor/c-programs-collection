
// 2] Yes Para No RDT = Armstrong
#include<stdio.h>
void Armstrong(int );
void main()
       {
           int n;
           printf("enter a num...");
           scanf("%d",&n);
           Armstrong(n);
       }
  void Armstrong(int n )
        {
            int sum=0,rem,n1;
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