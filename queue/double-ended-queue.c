//Dobule ended Queue
#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
struct queue *newnode,*temp,*front=NULL,*rear=NULL,*h,*p,*q;
int cnt=1,max;
void create()
{
    newnode=(struct queue*)malloc(sizeof(struct queue));
    newnode->next=NULL;
    printf("\n Enter Data :");
    scanf("%d",&newnode->data);
    
}
int isfull()
 {
     if(cnt==max)
     {
     // printf("\n cnt=%d & max=%d",cnt,max);
     return 1;
     }
     else
     return 0;
 }
 int isempty()
 {
     if(rear==NULL)
     return 1;
     else
     return 0;
 }
 void Rinq()
 {
    if(rear==NULL)
     {
         rear=newnode;
         front=rear;
         
        //printf("\n rear=%d \nmax=%d",rear->data,max);
    } 
         
     
         else if((isfull())==1)
           {
               printf("\n Queue is FULL!");
           }
         
     
     
     
     else
       {
         //  printf("\n max=%d",max);
           temp=rear;
           while(temp->next!=NULL)
           {
            
              temp=temp->next;
           }
          cnt++;
          temp->next=newnode;
          
          rear=newnode;
       }
 }
 void Rdeq()
 {
    
    if((isempty())==1)
      {
          printf("\n Queue is Empty!");
      }
     else
       {
          temp=front;
          while(temp->next!=rear)
          {
             temp=temp->next;
          }
         p=temp->next;
         rear=temp; 
         rear->next=NULL;
        free(p);
        printf("\n Delete %d ele from queue",p->data);
        
        cnt--;
       
       }
 }
void fdeq()
{
   if((isempty())==1)
   printf("\n Queue is Empty!!");
   else
   {
       temp=front;
       front=temp->next;
       printf("\n Delete %d ele from queue",temp->data);
      free(temp);
      cnt--;
      printf("\n fdeq cnt=%d",cnt);
     
   }
}
void finq()
  {
     if((isfull())==1)
     printf("\n Queue is Full!!!");
     else
      {
         cnt++;
             newnode->next=front;
             front=newnode;
        }
  }
 void display()
  {
      if((isempty())==1)
      printf("\n Queue is Empty!!!");
      else
       {
          temp=front;
          while(temp!=NULL)
           {
               printf("|%d|->",temp->data);
               temp=temp->next;
           }
       }
  }
 int main()
   {
      int ch;
      printf("\n◽Welcome in Queue◽");
      printf("\n Enter Max : ");
      scanf("%d",&max);
      printf("\n-------------------------------------");
      do
      {
          printf("\n cnt=%d",cnt);
          printf("\n 1.Insert From rear\n 2.Insert from front\n 3.Delete from rear\n 4.Delete from front\n 5.Display\n 6.Exit");
          printf("\n Enter uhr choice : ");
          scanf("%d",&ch);
          switch(ch)
          {
              case 1:create();
                           Rinq();
                           break;
              case 2:create();
                           finq();
                           break;
              case 3:Rdeq();
                           break;
              case 4:fdeq();
                           break;
              case 5:display();
                           break;
              case 6:exit(0);
              default:printf("\n Renter validd choice!!!!");
          }
      }while(1);
   }
               
     
     
 