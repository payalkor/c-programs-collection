
// 2] Yes para No RDT = Maxi
#include<stdio.h>
void max(int,int,int);
void main()
   {
             int a,b,c;
              printf(" enter 3 num.....");
              scanf("%d%d%d",&a,&b,&c);
              max(a,b,c);
   }
   void max(int a,int b, int c)
        {          
             
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
                             