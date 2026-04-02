// array of max Program using Malloc😍
#include<stdio.h>  
#include<stdlib.h>  
int main()
{  
    int n,i,*ptr;//sum1=0,sum2=0;//max
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
   ptr=(int *)malloc(sizeof(int));  
    printf("\n Enter %d elements of array ",n);    
    for(i=0;i<n;i++)    
    {    
        scanf("%d",&ptr[i]);    
           
    }   
   printf("\n Given array as an follow:");
      for(i=0;i<n;i++)    
    {    
        printf("\n\t%d",ptr[i]);    
           
    }
  //  max=ptr[0];
    for(i=0;i<n;i++)
           {
              if(ptr[i]>0)
                  {
                      printf("\nNum is +ve:\t%d",ptr[i]);
                  }
             else
                 {
                     
                    
                     printf("\nNum is -ve:\t%d",ptr[i]);
                 }
           }
}
                
            /* //  if(max<ptr[i]) max
              //  max=ptr[i]; max
                  {
                      //4printf("\nEven no are:%d",ptr[i]);even/odd
                      
                         
                  // sum1=ptr[i]+sum1; even/odd
                         }
           
                   
                      else 
                       {
                     // printf("\nOdd no:%d",ptr[i]);
                      sum2=ptr[i]+sum2;
                       }
           }
           printf("\nsum of even no:%d",sum1);
            printf("\nsum of odd no:%d",sum2);
           
}
           
     
           
           
                  
                  
           
       
    //printf("\n max is %d",max);

        
   // free(ptr);*/

     
    
    
    
  
