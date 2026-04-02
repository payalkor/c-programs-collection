#include<stdio.h>
#include<stdlib.h>
//Sorting LL in DMA
int cnt=1;
struct bubble
{
    int data;
    struct bubble *next;
};
struct bubble *newnode,*head=NULL,*temp,*p;
void create()
{
    newnode=(struct bubble*)malloc(sizeof(struct bubble));
    newnode->next=NULL;
    printf("\n Enter data:");
    scanf("%d",&newnode->data);
}
void insert()
{
    if(head==NULL)
    head=newnode;
    else
    {
        temp=head;
        while(temp->next!=NULL)
          {
              temp=temp->next;
          }
          cnt++;
          temp->next=newnode;
    }
}
void disply()
  {
        if(head==NULL)
        printf("\n List is empty");
        else
         temp=head;
         while(temp!=NULL)
          {
              printf("%d ->",temp->data);
              temp=temp->next;
          }
  }
  void sort()
   {
       int te,pass;
       //struct bubble *i;
       temp=head;
       for(pass=0;pass<cnt;pass++)
          {
              while(temp!=NULL)
                {
                   p=temp->next;
                   while(p!=NULL)
                      {
                    if(temp->data>p->data)
                         {
                       te=temp->data;
                       temp->data=p->data;
                       p->data=te;
                         }
                         p=p->next;
                      }
                   temp=temp->next;
                }
          }
      temp=head;
      while(temp!=NULL)
       {
           printf("%d|->",temp->data);
           temp=temp->next;
       }
   }
  int main()
{
       int ch;
       printf("\n Welcome in sorting methods");
       do
       {
                printf("\n 1.Insert\n 2.Disply\n 3.Sort\n 4.exit");
                printf("\n enter uhr choice");
                scanf("%d",&ch);
                switch(ch)
                {
                   case 1:create();
                                insert();
                                break;
                    case 2:disply();
                                break;
                    case 3:sort();
                                 break;
                    case 4:exit(0);
                }
       }while(1);
}
                       