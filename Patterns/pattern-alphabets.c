
  /*  Y  X  W
       S  T  V
       Q  R
       P        */
#include<stdio.h>
void main ()
  {
      int i,j,k,n,p;
      printf("enter r & c...");
      scanf("%d",&n);
      k=86;
      for(i=0;i<n;i++)
           {
               for (j=0;j<n-i;j++)
                      {
                          

                        
                          printf("\t%c",k++);

                          
                      }
                       
                      printf("\n");
                      p=(n-(i+1))*2;
                      k=k-p-1;
                      
                      
                      
                      
           }
  }