/*

    *                      *
        *          *
              *
        *           *
   *                      *             */

#include<stdio.h>
void main ()
  {
      int i,j,n,m;
      printf("enter r & c...");
      scanf("%d",&n);
      m=n/2;
      for(i=0;i<n;i++)
           {
               for (j=0;j<n;j++)
                 
                      {       
                            if(i==j || i+j==n-1)                                                                     
                               printf("\t*");
                               else
                               printf("\t");
                      }
                                                                                  
                              printf("\n");
                                                               
                      
           }
  }
                                