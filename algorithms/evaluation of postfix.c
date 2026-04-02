#include<stdio.h>
#include<ctype.h>
//evaluation of postfix
int s[20],top=-1,*x;
int push(int x)
 {
     s[++top]=x;
     
 }
 int pop()
  {
     return s[top--];
      //return s[top];
  }
  int main()
  {
      char charr[10];
   //   setbuf(stdout,NULL);
      int x,y,z,n;
       char *temp;
       printf("\n Enter expression ");
       scanf("%s",charr);
       temp=charr;
       while(*temp!='\0')
         {
             if(isdigit(*temp))
              {
                 n=*temp-48;
                 push(n);
              }
             else
               {
                  x=pop();
                  y=pop();
                  switch(*temp)
                   {
                       case '+':
                                     {
                                      z=y+x;
                                      break;
                                     }
                       case '-':{
                                      z=y-x;
                                      break;
                                     }
                       case '*':
                                    {            
                                      z=y*x;
                                      break;
                                    }
                       case '/':{
                                      z=y/x;
                                      break;
                                    }
                   }
               
            push(z);    
               }
            temp++;
        } 
     //  push(z);
     printf("\n result of %s is %d",charr,pop());
  }
  
                 
        