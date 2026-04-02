
// 4] No Para Yes RDT = Armstrong
#include<stdio.h>
int Armstrong();
void main()
       {
           int p;
           p=Armstrong();
           if(p==1)
             printf("Num is Armstrong");
          else
              printf("Num is not Armstrong");
       }
  int Armstrong()
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
                   return 1;
                  
                 else
                    return 0;
        }