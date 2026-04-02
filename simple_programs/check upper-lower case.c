// Checker= upperc case / lower case
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main ()
   {
       int ch;
       printf("enter a character....");
       scanf("%c",&ch);
       if(isalpha(ch))
          {
              if(isupper(ch))
                  printf("Given char is Alphabet in Upper case");
             else
                  printf("Given char is alphabet in Lowercase");
          }
        else
          printf("Given char is not alphabet");
          getch();
   }
