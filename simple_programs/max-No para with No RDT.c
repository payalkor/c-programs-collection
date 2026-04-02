#include<stdio.h>
void max();
void main()      // 1] No para No RDT=Maxi
   {
             max();
   }
   void max()
        {          
             int a,b,c;
              printf(" enter 3 num.....");
              scanf("%d%d%d",&a,&b,&c);
              if(a>b)
                 {
                     if(a>c)
                       {
                         printf("\tmax %d",a);
                       }
                    else
                       {
                         printf("\t max %d",c);
                       }
                 }
                 else if(b>c)
                           {
                               printf("\t max %d",b);
                           }
                          else
                            {
                                printf("\t max %d",c);
                            }
        }
        
                         
             