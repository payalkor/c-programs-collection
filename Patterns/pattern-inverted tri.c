#include<stdio.h>
 void main ()
     {
         int i,j,n,k;
         printf("enter a num....");
         scanf("%d",&n);
         for(i=0;i<n;i++)
             {
                 for(j=0;j<n;j++)
                       {
                           if(j==n-1 || j<=i+1)
                              
                                  
                                    {
                                  
                                     printf("\t*");
                                    }
                                     else
                                     {
                                     printf("\t");
                                     }
                                       printf("\n");
                             
                     }
             }
     }
                            