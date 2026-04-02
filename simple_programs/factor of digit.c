#include<stdio.h>
#include<conio.h>
void main()
 {
     int n,sum,rem,n1,sum1,i;
     printf("enter a no.....");
     scanf("%d",&n);
     i=1;
     sum1=0;
     while(n%i==0)
             {
                 sum=0;
                 while(n>0)
                          {
                            rem=n%10;
                            printf("\n %d",rem);
                            sum=sum+rem*rem*rem;
                            n=n/10;
                            
                          }
             
                   
                     
                         if(n%i==0)                   
                      {
                        printf("\nfactor=%d",i);
                        sum1=sum+i;
                        i++;
                      }
                      
                  
               }
                printf("\nsum of given digit=%d",sum);
                printf("\n sum of factors=%d",sum1);
                if(sum==sum1)
                {
                    printf("\nthe no is equal");
                }
                else
                {
                    printf("\nthe no is not equal");
                }
                getch();
 }