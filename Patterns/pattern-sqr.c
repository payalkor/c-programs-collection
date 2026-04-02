/*
     *    *    *    *
     *                *
     *                *
     *    *    *    *
*/
#include<stdio.h>
void main ()
  {
      int i,j,k,n;
      printf("enter r & c...");
      scanf("%d",&n);                                             
      for(i=0;i<n;i++)             
      
           {
              
               for (j=0;j<n;j++)
                 
                
                      {
                          
                           

                          if(i==0 || j==0 || i==n-1 || j==n-1)
                          
                          printf("\t*");
                          else
                          printf("\t");
                          
                          
                      }
                        
                       
                        printf("\n");
                        
                       
           }
  }