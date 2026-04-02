#include<stdio.h>
#include<conio.h>
void main()
   {
       int i,j,sum;
       printf("all perfect num between 1 to 500:\n");
       for (i=1;i<=500;i++)
            {
                sum=0;
                for(j=1;j<i;j++)
                     {
                         if(i%j==0)
                            {
                                sum+=j;
                            }
                     }
                     if(sum==i)
                        {
                            printf("\n  %d",i);
                        }
            }
            getch();
   }