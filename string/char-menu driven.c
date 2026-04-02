// Menu  program
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main ()
     {
         int n,k;
         char ch;
         printf("enter ur character");
         scanf("%c",&ch);
         do
           {
              printf("\n1.display upper or    lowercase");
             printf("\n2.check ASCII value");
             printf("\n3.diplay its next & privious character");
             printf("\n4.Exit");
            printf("\nenter choice.");
            scanf("%d",&n);
            switch(n)
                {
                    case 1: if(isalpha(ch))
                                  printf("given character is alphabet & in uppercase");
                                 else
                                 printf("given character is alphabet & in lowercase");
                                 break;
                    case 2: printf(" ASCII value of given character =%d",ch);
                                 break;
                    case 3: k=ch;
                                 printf(" its next character = %c",k+1);
                                 printf(" its priveous character=%c",k-1);
                    case 4: return 0;
                    default :printf("plz renter given cases..");
                }
                
           }while(1);
           getch();
     }
         