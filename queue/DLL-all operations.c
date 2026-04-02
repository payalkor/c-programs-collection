//Doubly Link list
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
   {
       int data;
       struct node *next,*pre;
   };
  struct node *newnode,*head=NULL,*temp,*p,*q;
  void createnode()
    {
       newnode=(struct node*)malloc(sizeof(struct node));
       newnode->next=NULL;
       newnode->pre=NULL;
       printf("\n enter data=");
       scanf("%d",&newnode->data);
    }
   void disp()
     {
         if(head==NULL)
           {
               head=newnode;
           }
          else
          {
              temp=head;
                      
              while(temp!=NULL  )
                 {
                     printf("%d|",temp->data);
                    
                     temp=temp->next;
                     
                    
                 }
          }
     }
    void insert_at_first()
    {
        if(head==NULL)
          {
              head=newnode;
          }
       else
         {
           p=head;
           newnode->next=p;
           p->pre=newnode;
           head=newnode;
          /*head=newnode;
             newnode->next=head;
              head=newnode;
             head->pre=NULL;*/
               
           }
         
    }
    
    
    
    //Pending Of revers
   void revers()
      {
          if(head==NULL)    
                {
                  printf("\n LIST IS EMPTY"); 
                  }
             else
                {
                   temp=head;                                                      while(temp->next!=NULL)
                          {
                                    temp=temp->next;                                        
                          }  
            //      temp=temp->pre;
                 while(temp != NULL)
                       {
                           
                       
                           printf("%d|",temp->data);
                            temp=temp->pre;
                       }
                           
                          
                       
                }
      }
   
    void  insert_at_last()
         {
            if(head==NULL)    
                {
                   head=newnode;
                  }
             else
                {                    
                    temp=head;
                      
              while(temp->next!=NULL)
                 {                                         
                     temp=temp->next;
                 }
              temp->next=newnode;
              newnode->pre=temp;
              newnode->next=NULL;
                }
         }
void  insert_at_middle()  
      {
          int cnt=0,mid,i=1;
          
          if(head==NULL)
              {
                 printf("\nLIST IS EMPTY Can not inserting any element");
              }
          else
             {
                  temp=head;
                
            while(temp!=NULL)
                  {
                    cnt++;
                    temp=temp->next;
                   }
            
            mid=cnt/2;
            temp=head;          
            while(i<mid)  
                
         
                    {
                        i++;
                        temp=temp->next;
                        
                    }
                }
              p=temp->next;
             temp->next=newnode;
             newnode->pre=temp;
             newnode->next=p;
             p->pre=newnode;                         
       }   
   void insert_at_sp() 
   {
       int i=1,cnt=0,pos;
              if(head==NULL)
              {
                 printf("\nLIST IS EMPTY Can not inserting any element");
              }
          else
            {
              temp=head;
              while(temp!=NULL)
                      {
                          cnt++;
                          temp=temp->next;
                      }
               printf("\n*Enter specific position:");
               scanf("%d",&pos);
               if(pos>=cnt || pos<=1)
                   {
                       printf("\n-------Sorry,Can not inserting at %d position Plz enter between 1 & %d positions\n",pos,cnt);
                   }
               else
                  {
                      temp=head;
                      while(i<pos-1)
                          {
                              temp=temp->next;
                              i++;
                          }
                       p=temp->next;
                      temp->next=newnode;
                      newnode->pre=temp;
                      newnode->next=p;
                      p->pre=newnode;
                  }
            }
     }
     void dele_at_first()
     {
             if(head==NULL)
                {
                    printf("\n LIST IS EMPTY");
                }
             else
                 {
                     temp=head;
                     
                     head=temp->next;
                     printf("\n-------DELETED FIRST %d ele ",temp->data);
                     head->pre=NULL;
                     free(temp);
                     
                 }
     }
     void dele_at_last()
      {
             if(head==NULL)
                {
                    printf("\n LIST IS EMPTY");
                }
            else
              {
                  temp=head;
                  while(temp->next->next!=NULL)
                     {
                         temp=temp->next;
                     }
                  q=temp->next;
                  temp->next=NULL;
                  printf("\n-------DELETED AT LAST %d ele ",q->data);
                  
                  free(q);
              }
      } 
    void dele_at_middle()
      {  
        int cnt=0,mid,i;
          
          if(head==NULL)
              {
                 printf("\nLIST IS EMPTY Can not inserting any element");
              }
          else
             {
                  temp=head;
                
            while(temp!=NULL)
                  {
                    cnt++;
                    temp=temp->next;
                   }
             
            mid=cnt/2;
            temp=head;
            i=1;
            while(i<(mid+1)-1)                          
                    {
                        i++;
                        temp=temp->next;
                        
                    }
                 p= temp->next;
                 q=p->next;
                 temp->next=q;
                 q->pre=temp;
                printf("-------DELETED AT MIDDLE %d ele ",p->data);
                 free(p);
                    
                }                          
       } 
    void dele_at_sp()   
          {
             int cnt=0,pos,i=1;
            if(head==NULL)    
                {
                  printf("\n LIST IS EMPTY"); 
                  }
             else
                {
                   temp=head;                                                      while(temp!=NULL)
                          {
                              cnt++;                                                                temp=temp->next;    
                          }   
           
                printf("\n*Enter position for deleting:");
                scanf("%d",&pos);   
                if(pos>=cnt && pos<=1) 
                 {
                     printf("\nPlease renter position between of 1 & %d",cnt);
                 }
               else
                 {
                     temp=head;
                     while(i<pos-1)
                       {
                          temp=temp->next;
                          i++;
                       }
                 
                   q= temp->next;
                     p=q->next;
                     
                    printf("\n------DELETED AT SPECIFIC POSITION OF %d",pos);
                  
                 
                 free(q);
                 temp->next=p;
                 p->pre=temp;                                                   }
              }
        }  
   
                     
           
    int main()
    {
        int ch;
        
    printf("\n Welcome in Dobuly link list\n");
    do
      {
             printf("\n-------------------------------");
             printf("\n 1.Insert at first\n 2.Insert at last\n 3.insert at middle \n 4.Insert at specific position\n 5.Delete at first\n 6.Delete at last\n 7.Delete at middle\n 8.Delete at specific position \n 9.Disply\n 10.Exit\n 11.revers");
             printf("\n ••Enter Uhr choice=");
             scanf("%d",&ch);
             switch(ch)
             {
                 case 1:createnode();
                              insert_at_first();
                              break;
                 case 2:createnode();
                              insert_at_last();
                              break;
                 case 3:createnode();
                              insert_at_middle();
                              break;
                 case 4:createnode();
                              insert_at_sp();
                              break;
                 case 5:dele_at_first();
                              break;
                 case 6:dele_at_last();
                              break;
                 case 7:dele_at_middle();
                              break;
                 case 8:dele_at_sp();
                              break;
                 case 9: disp();
                               break;
                  case 10:exit(0);
                  case 11:revers();
                                  break;
             }
           }while(1);
      getch();
    }