#include<stdio.h>
#include<string.h>
int main()
  {
    
    char s1[40],s2[40],p;
      printf("\n enter string1:");
       gets(s1);
     printf("\n enter string2:");
      gets(s2);
      strncmp(s1,s2);
     printf("\n compare:%d",strncmp(s1,s2));
     }
  
  