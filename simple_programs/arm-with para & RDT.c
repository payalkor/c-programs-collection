
// 3] Yes Para Yes RDT = Armstrong
#include<stdio.h>
int Armstrong(int);
void main()
       {
            int n,p;
            printf(" enter a num...");
            scanf("%d",&n);
            p=Armstrong(n);
            if(p==n)
               printf("\t Num is Armstrong");
            else
               printf("\t Num is not Armstrong");
       }
   int Armstrong(int n)
        {
            int sum=0,rem;
           
            while(n>0)
                  {
                      rem=n%10;
                      sum=sum+rem*rem*rem;
                      n=n/10;
                  }
                  return sum;
        }