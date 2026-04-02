//Queue in DMA
#include<stdio.h>
#include<stdlib.h>
struct queue
{
   int data;
   struct queue *next;
};
struct queue *newnode, *front=NULL,*rear=NULL,*temp,*h=NULL;
int max,cnt=0;

int isempty()
{
    if(cnt==0)
      {
          printf("\n Empty");
          return 1;
      }
      else
          {
              return 0;
          }
}
int isfull()
 {
     if(cnt==max)
       {
           
           return 1;
       }
       else
         {
             return 0;
         }
 }
  int createnode()
{
    if((isfull())==0)
      {
    newnode=(struct queue*)malloc(sizeof(struct queue));
    newnode->next=NULL;
    printf("\n Enter Data = ");
    scanf("%d",&newnode->data);
      }
}
 void enqueue()
  {
      if(rear==NULL)
        {
           rear=newnode;
            front=rear;
           cnt++;

        }
        else if((isfull())==1)
                 {
                    printf("\n FULL");
                 }
                 else
                 {
                   rear->next=newnode;
                    rear=newnode;
                   cnt++;
                 }
           
           
       
  }
  void dequeue()
   {
      if((isempty())==0)
      {
       
            temp=front;
            printf("\n Delete %d element from Queue☑️",temp->data);
             front=temp->next;
            free(temp);
            cnt--;
      }
   }
   void display()
   {
       if((isempty())==0)
      
         {
            temp=front;
            while(temp!=NULL)
             {
                printf(" |%d|",temp->data);
                temp=temp->next;
             }
         }
   }
  int main()
  {
      int ch,p;
      printf("\n   ➡️Welcome in Queue⬅️");
      printf("\n Enter Maximum Number: ");
      scanf("%d",&max);
      printf("\n");
      do
      {
         printf("\n  1.Insert in Queue\n  2.Delete from Queue\n  3.Display\n  4.Exit");
         printf("\n 🔴Enter uhr choice:");
         scanf("%d",&ch);
         switch(ch)
         {
            case 1:
                         createnode();
                           enqueue();
                          break;
            case 2:dequeue();
                         break;
            case 3:display();
                         break;
            case 4:return 0;
            default :printf("\n Renter Valid choice!!!!!");
         }
     
      printf("\n *********************");
      }while(1);
  }
            
            
          
  
           
           