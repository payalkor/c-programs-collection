#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void hea(int i, int n,int a[])
{
    int tem, larg=i,l=2*i+1,r=2*i+2;
    if(l<n && a[larg]<a[l])
     larg=l;
    if(r <n && a[larg]<a[r])
    larg=r;
    if(larg!=i) 
      {
          tem=a[i];
          a[i]=a[larg];
           a[larg]=tem; 
            hea(larg,n,a);
      }
}
void heap(int a[],int n) 
{
    
    int i,tem;
    for(i=(n/2)-1;i>=0;i--)
    {
        hea(i,n,a);
    }
    //rintf("n  :%d",n);
for(i=n-1; i>0;i--) 
   {
     tem=a[i];
     a[i]=a[0];
     a[0]=tem; 
     hea(0,i,a);
   }
 /*printf("\n Anw... ");
for(i=0;i<n;i++)
 printf(" %d ",a[i]);*/
}
int main()
{
    int n,i;
    printf("\n Enter total num... ");
  scanf("%d",&n); 
  int a[n];
srand(time(NULL));
for(int i=0;i<n;i++){
     a[i]=rand()%100;
}
printf("\n Oiginal... ");
for(i=0;i<n;i++){
 printf(" %d ",a[i]);
}
heap(a,n);
printf("\n Anw... ");
for(i=0;i<n;i++){
 printf(" %d ",a[i]);
}
}