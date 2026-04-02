//DCLL
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *temp,*newnode=NULL,*p,*r,*q,*head=NULL;
void create()
{
    
    newnode=(struct node*)malloc(sizeof(struct node));
     newnode->next=newnode;
     newnode->prev=newnode;
     printf("\n Enter Data = ");
    scanf("%d",&newnode->data);
    
}
void insert()
{
   
    if(head==NULL)
     {
         head=newnode;
       // printf("\n head=%d",head->data);
     }
     else
      {
         temp=head;
         while(temp->next!=head)
          {
            //printf("\n valid=%d",temp->data);
              temp=temp->next;
          }
        //  printf("\n unvalid=%d",temp->data);
         temp->next=newnode;
         newnode->prev=temp;
         newnode->next=head;
         head->prev=newnode;
      }
  
}
void display()
 {
    
    
    if(head==NULL)
 {
    //printf("\n head=%d",head->data);
    printf("\n List is empty");
 }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            printf(" |%d| ->",temp->data);
           temp=temp->next;
           
        }
       printf("|%d|",head->prev->data);
    }
 }
 void dele()
  {
      if(head==NULL)
      printf("\n EMPTY");
      else
       {
      temp=head;
      printf("\n Delete %d ",head->data);
      while(temp->next!=head)
       {
           temp=temp->next;
       }
       if(temp->data==head->data)
        {
           // printf("\n temp=%d\n head=%d",temp->data,head->data);
            
            head=NULL;
         //   printf("\n head=%d",head->data);
            
        }
        else{
          //  printf("\n Hii");
       q=temp->next;
       r=head;
       p=r->next;
       temp->next=p;
       p->prev=temp;
      free(r);
      head=p;
        }
    
       }
  }
 int main()
        {
              int ch;
              printf("\n Welcome in Doubly Circuler link list");
              do{
                 printf("\n------------------------------");
                 printf("\n  1] Insert at first\n 2 disply\n 3]Delete\n  10] EXIT");
                 printf("\n Enter uhr choice:-");
                 scanf("%d",&ch);
                 switch(ch)
                    {
                        case 1: create();
                                     insert();
                                     break;
                        case 2:display();
                                     break;
                        case 3:dele();
                                    break;
                        case 10:exit(0);
                    }
              }while(1);
        }
    