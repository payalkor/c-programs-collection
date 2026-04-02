#include<stdio.h>
#include<string.h>
void pop();
void push();
char s[10];
 int t=0,i,top;
int main()
{
    
    printf("\n enter str ");
    scanf("%s",s);
    t=strlen(s);
  //  printf("t=%d",t);
    for(i=0;s[i]!='\0';i++)
     {
         if(i==t-1)
          {
              top=i;
          }
     }
     push();
   }    // printf(" %d->",top);
     

void push()
{
    for(i=0;s[i]!='\0';i++)
      {
         printf(" %c->",s[i]);
      }
      pop();
}

void pop()
{
    printf("\n String revers:");
    for(i=top;i>=0;i--)
        {
            printf(" %c->",s[i]);
        }
}
                
                     