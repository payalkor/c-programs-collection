#include<stdio.h>
int main()
{
    int i,n,pass;
    char c[20],temp;
    printf("\n enter no of char");
    scanf("%d",&n);
    printf("\nenter %d elements ",n);
    for(i=0;i<n;i++)
       {
          scanf("\n%c",&c[i]);
          printf("\n  |%c|",c[i]);
       }
     for(pass=1;pass<=n;pass++)
       {
           for(i=0;i<n;i++)
             {
                 if(c[i]>c[i+1])
                   {
                       temp=c[i];
                       c[i]=c[i+1];
                       c[i+1]=temp;
                   }
             }
       }
       printf("\n.............");
       for(i=1;i<=n;i++)
      printf("\n |%c|",c[i]);
}
                       
      