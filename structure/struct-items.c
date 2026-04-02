
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct item
   {
       char nem[30];
       int    code,price;
   };
  int main()
      {
        struct item e[30];
        char sk[30];
        int n,i,p,ch,q;
        printf("\n enter no of item");
        scanf("%d",&n);
        printf("\n enter %d elements:",n);
        for(i=0;i<n;i++)
           {
              printf("\n enter code:");
              scanf("%d",&e[i].code);
              printf("\n enter name:");
              scanf("%s",e[i].nem);
              printf("\n enter  price:");
              scanf("%d",&e[i].price);
           }
        
            printf("\nCode\tName\tPrice");
              for(i=0;i<n;i++)
                    {
                       printf("\n%d\t%s\t%d",e[i].code,e[i].nem,e[i].price);
                    }
            do
               {
                 printf("\n1.display item having>5000\n2.search for an item");
                  printf("\n enter above choice");
                  scanf("%d",&ch);
                  if(ch==1)
                     {
                        for(i=0;i<n;i++)
                             {
                                 if(e[i].price>5000)
                                   {
                                       p=i;
                                   }
                             }
                     
                 printf("\n%d\t%s\t%d",e[p].code,e[p].nem,e[p].price);
                     }
                else
                    {
                   printf("\n enter item name that uh want to srarch");
                   scanf("%s",sk);
                 for(i=0;i<n;i++)
                       {
                              if(strcmp(e[i].nem,sk)==0)
                             
                     printf("\n string is found");
                                                 
                   else
                          
                          printf("\n string is not found");
                         
                       }
                    }
                    
               }while(1);
      }
               
      