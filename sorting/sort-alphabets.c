#include<stdio.h>
int main()
   {
       char a[10],tem;
       int n,i,j,pass;
       printf("\n enter size of alphabet:");
       scanf("%d",&n);
       printf("\nenter %d alphabets:\n",n);
       for(i=0;i<n;i++)
          {                                    
              scanf("\n%c",&a[i]);
          }     
         for(pass=0;pass<n;pass++)
             {
               for(i=0;i<n-pass;i++)
                  {              
     		if (a[i] > a[i+1]) 
     		     {
       			tem = a[i];
       			a[i] = a[i+1];
       			a[i+1] = tem;       	
     		     }                  
     		}
         }
        for(i=0;i<n;i++)
            {
             printf("%c",a[i]);
            }
            return 0;
   }