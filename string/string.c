#include<stdio.h>
#include<string.h>
int main()
  {
      char s[20],h;
      int i,w=0,p=1;
      printf("\n enter string:");
      gets(s);
      
     printf("\t%c",s[0]);
     for(i=0;i<strlen(s);i++)
            {
                if(s[i]==' ')
                  w++;
            }
            
  for(i=0;i<strlen(s);i++) 
          {
                     if(s[i]==' ')
                         {
                             if(p<w)
                              {                                                                                 
              printf("%c",s[i+1]);
               p++;
               
                              }
                         }
                }                           
   //  strrchr(s,' ');
   //   printf("%c",sc);
      
       //strrchr(s,' ');
      puts(strrchr(s,' '));
  
 
  }