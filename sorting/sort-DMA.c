#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i,max,phase,*ptr,n,temp;
    printf("\n enter no. of elements");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int));
    printf("\n enter %d elements",n);
    for(i=0;i<n;i++)
       {
           scanf("%d",&ptr[i]);
           printf("\t%d",ptr[i]);
       }
  //   max=ptr[0];
     for(phase=0;phase<n;phase++)
       {
           for(i=0;i<n;i++)
              {
                  if(*(ptr+i)<*(ptr+(i+1)))
                   //  *(ptr+i)=*(ptr+i+1);
               {      
      temp=*(ptr+i);
      *(ptr+i)=*(ptr+i+1);
      *(ptr+i+1)=temp;
                 }
              }
       }
      printf("\n sorting") ;              
     for(i=0;i<n;i++)
        {
         
      printf("\t%d",*(ptr+i));
        }         
}
