#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("\n enter 4 n....");
    scanf("%d%d%d%d",&a,&b,&c,&d,&e);
    {
        if(a>b)
        {
            if(a>c)
              {
                  if(a>d)
                    {
                        if(a>e)
                         {
                             printf("the max = %d",a);
                         }
                          else
                          {
                              printf(" the max=%d",e);
                          }
                      }
                       else   if (d>e) 
                         {
                           printf("the max=%d",d);
                         }
                         else
                         { 
                            printf("the max=%d ",e);
                         }
                      }
                       else if(c>d)   
                       {
                          if(c>e)
                          {
                             printf("max=%d",c);
                          }
                           else
                          {
                             printf("max=%d",e);
                          }
                       } 
                     }                                     
                          else if(b>c)
                         {
                             if(b>d)
                             {
                                 if(b>e)
                                  {
                                      printf("max=%d",b);
                                  }
                             }
                         
                        }
                  }
                    
                     
   }
                        