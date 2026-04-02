//Insert at sp position in array
#include<stdio.h>
int main()
{
    int pos,i,a[20],b,n,c[20];
    printf("\n Enter size of element:");
    scanf("%d",&n);
    printf("\n enter %d Elements:",n);
    for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
          printf("%d|",a[i]);
      }
    printf("\n Enter Insertion element:");
    scanf("%d",&b);
    printf("\n Enter position:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
         {
             a[i+1]=a[i];
         }
       a[pos-1]=b;
    for(i=0;i<=n;i++)
    printf("|%d|",a[i]);
}
             
     
        