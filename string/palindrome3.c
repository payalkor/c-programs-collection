//3rd method of palindrom program in string
#include<stdio.h>
#include<string.h>
int main ()
 {
     char s[20];
     int L=0,i,j=0,flag=0;
     printf("\n enter string..");
     gets(s);
   for(i=0;s[i]!='\0';i++)
        {
            L++;
        }
    
     for(i=0;i<L/2;i++)
           {
               
                   
                       if(s[i]!=s[L-1-i])
                          {
                              flag=1;
                              break;
                          }
                   
           }
       if(flag==1)
        printf("\n string is not palindrom");
        else
        printf("\n string is pallindrom");
 }
     