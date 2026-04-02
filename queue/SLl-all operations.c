//**Singly Link list**//
#include<stdio.h>
#include<stdlib.h>
struct node
   {
       int data;
       struct node *next;
   };
  struct node *newnode,*head=NULL,*temp,*p,*q,*c,*temp1,*t;
  void createnode()
    {
       newnode=(struct node*)malloc(sizeof(struct node));
       newnode->next=NULL;
     //  head=ne
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
              while(temp!=NULL)
                 {
                     printf("%d|",temp->data);
                     temp=temp->next;
                     
                 }
          }
     }
    void sort()
           {
                int a[30],cnt=0,i=0,p,tem;                                 temp=head;
                while(temp!=NULL)
                      {
                          a[i]=temp->data;
                          temp=temp->next;
                          i++;
                          
                      }
                  
                cnt=i-1;
               
               for(p=0;p<=cnt;p++)
                   {
                       for(i=0;i<=cnt-1;i++)
                           {
                               if(a[i]>a[i+1])
                                  {
                                      tem=a[i];
                                      a[i]=a[i+1];
                                      a[i+1]=tem;
                                  }
                           }
                   }
            
         for(i=0;i<=cnt;i++)
          printf("%d|",a[i]);
           
           }
  void sortbylink()
    {
         int s;
         if(head==NULL)
             {
                 printf("\n List is empty");
             }
          else
           {
            temp=head;
             while(temp!=NULL)
                     {
                        p=temp->next;
                         while(p!=NULL)
                             {
                                if(temp->data>p->data)
                                    {
                                       printf("\ntemp=%d next=%d",temp->data,p->data);
                                       s=temp->data;
                                       temp->data=p->data;                                       p->data=s;
                                    }
                             
                            p=p->next;
                             }
                     
                  temp=temp->next;
                     }
           }
                                       
               
    }
                                 
                                               
                                      
                       
                   
            
     
    void insertatfirst()
    {
        if(head==NULL)
          {
              head=newnode;
          }
       else
         {
             newnode->next=head;
             head=newnode;
         }
         
    }
 void insertatlast()  
   {
       if(head==NULL)
          {
              head=newnode;
          }
       else
         {
             temp=head;
               
                //   while(temp!=NULL)
                    while(temp->next!=NULL)
                        {
                            temp=temp->next;
                        }
                     temp->next=newnode;
                     //newnode->next=NULL;
               
         }
   }
  void reverse()
        {
            int a[30],cnt=0,i=0;
             if(head==NULL)
          {
             printf("\n Link list is empty");
          }
         else
            {
                temp=head;
                while(temp!=NULL)
                      {
                          a[i]=temp->data;
                          temp=temp->next;
                          i++;
                          
                      }
                  
                cnt=i-1;
                
               for(i=cnt;i>=0;i--)
                   {
                       printf("%d|",a[i]);
                   }
            }
        }
                
            
     void search()
         {
             int k,flag=0;
             if(head==NULL)
          {
             printf("\n Link list is empty");
          }
        else
          {
         printf("\n Plz enter serch element:");
         scanf("%d",&k);
          temp=head;
          while(temp!=NULL)
                 {
                     if(temp->data==k)
                        {
                            flag=1;
                            break;
                        }                 
                     temp=temp->next;
                 }
           if(flag==1)
              {
                  printf("\n Element found in link list");
              }
         else
           {
               printf("\n Element Not found in link list");
           }
         }
   }
   
   void insertatmiddle()
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
             //  printf("\ncount=%d",cnt);
            mid=cnt/2;
            temp=head;
            i=1;
            while(i<mid)  
                
          //      temp=head;
                    {
                        i++;
                        temp=temp->next;
                        
                    }
                }
               
             p=temp;
             q=p->next;
              p->next=newnode;
              newnode->next=q;
       }
     void inseratsp()
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
                      if(i<pos-1)
                          {
                              temp=temp->next;
                              i++;
                          }
                      p=temp;
                      q=temp->next;
                       p->next=newnode;
                       newnode->next=q;
                  }
            }
     }
  void delatfirst()
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
                     free(temp);
                 }
     }
    void del_at_last()
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
     void del_at_middle()
       {
             int mid,cnt=0,i=1;
             if(head==NULL)
               {
                printf("\n LIST IS EMPTY");
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
                 if(i<(mid+1)-1)
                    {
                        temp=temp->next;
                        i++;
                    }
               
                p=temp->next;
               printf("-------DELETED AT MIDDLE %d ele ",p->data);
               q=p->next;
               free(p);
               temp->next=q;
               //free(q);
             }
       }
 void del_at_sp()   
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
                 
                    p=temp->next;
                     q=p->next;
                    printf("\n------DELETED AT SPECIFIC POSITION OF %d",pos);
                  
                 
                 free(p);
                 temp->next=q;
                   
                 
                   
                 }
                }
          }
          
                     
                          
   
   void main()
      {
           int ch;
           printf("\n**Welcome in linked list**");
           do
           {
             printf("\n-------------------------------");
             printf("\n 1.Insert at first\n 2.Insert at last\n 3.insert at middle \n 4.Insert at specific position\n 5.Delete at first\n 6.Delete at last\n 7.Delete at middle\n 8.Delete at specific position\n 9.Search\n 10.Reverse\n 11.Sort\n 12.Sort by link list\n 13.Disply\n 14.Exit");
             printf("\n ••Enter Uhr choice=");
             scanf("%d",&ch);
             switch(ch)
             {
                 case 1:createnode();
                              insertatfirst();
                              break;
                 case 2:createnode();
                              insertatlast();
                              break;
                 case 3:createnode();
                              insertatmiddle();
                              break;
                 case 4:createnode();
                              inseratsp();
                              break;
                 case 5:delatfirst();
                              break;
                 case 6:del_at_last();
                              break;
                 case 7:del_at_middle();
                              break;
                 case 8:del_at_sp();
                              break;
                 case 9:search();
                              break;
                 case 10:reverse();
                               break;
                 case 11:sort();
                                break;
                 case 12:sortbylink();
                                break;
                 case 13: disp();
                               break;
                 case 14:exit(0);
             }
           }while(1);
      }
             
             