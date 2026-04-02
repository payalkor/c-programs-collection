//prime no between 1 to 20
#include<stdio.h>
 int main()    
   {
       int i,j,cnt=0;
       for(i=2;i<65;i++)
          {
                   for(j=1;j<i;j++)
                       {
                           if(i%j==0)
                              {
                              
                                break;
                              }
                                
                                
                                
                      printf("\n %d",i);
                       cnt++;
                              
                      printf("\n\t %d",cnt);
                       }
                 
                       
          }
   }
                   