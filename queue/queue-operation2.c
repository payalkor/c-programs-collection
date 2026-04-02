#include<stdio.h>
#include<stdlib.h>
struct q
{
    int data;
    struct q *next,*prev;
};
struct q *p, *newnode,*rear,*front,*temp;
void create()
{
   newnode=(struct q*)malloc(sizeof(struct q));
   newnode->next=NULL;
   newnode->prev=NULL;
   printf("\n Enter data:");
    scanf("%d",&newnode->data);
}
void inti()
{
   rear=NULL;
    front=NULL;
}
void enq()
  {
   if(rear==NULL)
     {
         rear=newnode;
         front=rear;
     }
   /*else if(rear==max)
     {
        printf("\n Queue is full");
     }*/
     else
       {
          
          rear->next=newnode;
          newnode->prev=rear;
          newnode->next=NULL;
          rear=newnode;
          printf("Hiiiiiiiii %d",rear->data);
       }
  }
  void deq()
   {
      if(rear==NULL)
       printf("\n Queue is empty");
       else
        {
          if(rear->next==NULL)
            {
              temp=rear;
              free(temp);
              rear=NULL;
            }
            else
              {
          p=front;
          temp=front->next;
          printf("\n deleted %d ele from queue",p->data);
          free(p);
          front=temp;
          front->prev=NULL;
              }
        }
   }
   void disply()
    {
    //  printf("\n rear %d",rear->data);
      if(rear==NULL)
      printf("\n Can not disply");
      else
        {
       temp=front;
       while(temp!=NULL)
        {
          printf(" %d->",temp->data);
          
          temp=temp->next;
        //  printf("\n temp %d",temp->data);
        }
        }
    }
 void rev()
    {
         temp=rear;
          while(temp->prev!=NULL)
            {
                printf("%d->",temp->data);
                temp=temp->prev;
                if(temp->prev==NULL)
                  {
                     printf("%d->",temp->data);
                  }
            }
    }
    int main()
{
       int ch;
       printf("\n Welcome in Queue");
       do
       {
                printf("\n 1.int\n 2.enqueue\n 3.dequeue\n 4.disply\n 5.revers\n 6.exit");
                printf("\n enter uhr choice");
                scanf("%d",&ch);
                switch(ch)
                {
                   case 1:inti();
                                break;
                  case 2:create();
                               enq();
                               break;
                   case 3:deq();
                                break;
                    case 4:disply();
                                break;
                    case 5:rev();
                                break;
                    case 6:exit(0);
                }
       }while(1);
}
          
          
          
         
          
          
          
    
    