#include<stdio.h>
struct time
   {
       int hh,mm,ss;
   };
 int main()
     {
         struct time t,*p;
         p=&t;
          printf("\n enter hours:");
          scanf("%d",&p->hh);
           printf("\n enter minutes:");
          scanf("%d",&p->mm);
           printf("\n enter seconds:");
          scanf("%d",&p->ss);
          printf("\nhh:\tmm:\tss");
          printf("\n%d\t%d\t%d",p->hh,p->mm,p->ss);
        if(p->hh==07 && p->mm==21 && p->ss==40)
            {
                printf("\n timr is valid");
            }
          else
            {
                printf("\n time is not valid");
            }
     }
          
          