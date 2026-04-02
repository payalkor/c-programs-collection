#include<stdio.h>
#include<conio.h>
//Counting Sort 
void cuntsort(int max);
int a[20],n;
int main()
  {
     int i,max=0;
    printf("\n enter size of array=");
    scanf("%d",&n);
   printf("\nenter %d elements in array=",n);
   
    for(i=1;i<=n;i++)
   // max=a[1];
         {
             scanf("%d",&a[i]);
             if(a[i]>max)
             {
             max=a[i];
             }
            
         }
    
       cuntsort(max);
       getch();
       
  }
  void cuntsort(int max)
    {
        int b[20],c[24],i,j;
        for(i=1;i<=max;i++)
           {
               c[i]=0;
          }             
         for(j=1;j<=n;j++)
         {                       
                c[a[j]]=c[a[j]]+1;
         }
                         
        for(j=1;j<=max;j++)
        {           
                c[j]=c[j]+c[j-1];
         }                   
        for(j=n;j>=1;j--)
            {
                b[c[a[j]]]=a[j];   
                c[a[j]]=c[a[j]]-1;                      
             }
          printf("\n After Sorting:");
             for(i=1;i<=n;i++)
         {
            
             printf("%d|",b[i]);
         }
    }
          