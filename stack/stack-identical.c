#include<stdio.h>
int main()
{
    int a[10],b[10],i,flag=0,max;
    printf("\n Enter Max for 2 stacks");
    scanf("%d",&max);
    printf("\n Enter %d elem in 1st stack");
    for(i=0;i<max;i++)
      {
         scanf("%d",&a[i]);
         printf("\n|%d|",a[i]);
      }
    printf("\n Enter %d elem in 2nd stack");
    for(i=0;i<max;i++)
      {
         scanf("%d",&b[i]);
         printf("\n|%d|",b[i]);
      }
     for(i=0;i<max;i++)
       {
           if(a[i]==b[i])
             {
                 flag=0;
             }
           else if(a[i]!=b[i])
             {
               flag=1;
               break;
             }
       }
       
            if(flag==0)
             printf("stack is identical");
             else
             printf("stack is not identical");
}
                 
      
    