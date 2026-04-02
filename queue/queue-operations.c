#include<stdio.h>
#include<stdlib.h>
struct q
{
    int data;
    struct q *next;
};
struct q *newnode,*f,*r,*temp;
void create()
{
    newnode=(struct q*)malloc(sizeof(struct q));
    newnode->next=newnode;
    printf("\n Enter data ");
    scanf("%d",&newnode->data);
}
void init()
{
    f=NULL;
    r=NULL;
}
int isempty()
{
    if(r==NULL)
      return 1;
    else
      return 0;
}
void addinq()
{
    if(r==NULL)
      {
         r=newnode;
         f=r;
      }
      else
        {
            temp=r;
            temp->next=newnode;
            newnode->next=r;
            r=newnode;
            r->next=f;
        }
}
void delet()
 {
     if((isempty())==1)
     printf("\n Queue is empty");
     else
      {
         temp=f;
          f=temp->next;
          printf("\n delete %d ele",temp->data);
          free(temp);
          r->next=f;.
      }
 }
 void peek()
  {
     printf("\n peek ele in queue  is %d",f->data);
  }
    void dis()
    {
        if((isempty())==1)
     printf("\n Queue is empty");
     else
      {
         temp=f;
         while(temp->next!=f)
            {
                
                printf("|%d|",temp->data);
                
                temp=temp->next;
             /*   if(temp->next==f)
                   {
                       printf("|%d|",temp->data);
                       break;
                   }*/
            }
          if(temp->next==f)
                   {
                       printf("|%d|",temp->data);
                       
                   }
      }
    }
                       
       
        
int main()
{
   int ch;
   printf("\n           Welcome in Queue ");
   do{
         printf("\n1.init\n 2.Addqueue\n 3.Deletequeue\n 4.peek\n 5.isempty\n 6.Display\n 7.Exit");
         printf("\n Enter above choice");
         scanf("%d",&ch);
         switch(ch)
          {
              case 1:init();
                        break;
              case 2:create();
                          addinq();
                          break;
              case 3:delet();
                           break;
               case 4:peek();
                            break;
               case 5:if(isempty()==1)
                            printf("\n Queue is empty");
                            else
                            printf("\n Queue is not empty");
              case 6:dis();
                           break;
              case 7:exit(0);
          }
   }while(1);
}
                            
         

