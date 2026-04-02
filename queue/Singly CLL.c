//Circular Singly Link list☑️
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
   {
       int data;
       struct node *next;
   };
   struct node *newnode,*head=NULL,*temp,*p,*q;
   void createnode()
     {
         newnode=(struct node*)malloc(sizeof(struct node));
         newnode->next=newnode;
         
          printf("\n Enter data:");
          scanf("%d",&newnode->data);
     }
   void disply()
      {
          if(head==NULL)
                 {
                   printf("\n List is Empty ");
                 }
              else
                 {
         
          temp=head;
          
              while(temp->next!=head)
                  {
                      
                      printf(" %d|",temp->data);
                     
                     temp=  temp->next;
                      if(temp->next==head)
                         {
                         printf(" %d|",temp->data);
                         }
                     
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
                  
                while(temp->next!=head)
                   {
                      
                      temp=temp->next;
                   }
                   
                   temp->next=newnode;
                   newnode->next=head;
                  
                 }
                     
             }
 void sp()
 {
    int num;
    printf("\n Enter Specific Number:");
    scanf("%d",&num);
    temp=head;
    while(temp->next!=head)
      {
      
     if(temp->data==num)
       
       printf("\n Number is found in SCLL");
       temp=temp->next;
       
     }
    if(head->data==num) 
    printf("\n Found");
    else 
    printf("\n Number is not found");
       
 }
    
               
      
     int main()
        {
              int ch;
              printf("\n Welcome in Sinly Circuler link list");
              do{
                 printf("\n------------------------------");
                 printf("\n  1] Insert at last\n 2]Specific Number \n  9] disply\n  10] EXIT");
                 printf("\n Enter uhr choice:-");
                 scanf("%d",&ch);
                 switch(ch)
                    {
                        case 1: createnode();
                                     insert_at_last();
                                     break;
                        case 2:sp();
                                    break;
                        case 9:disply();
                                     break;
                        case 10:exit(0);
                    }
              }while(1);
        }
             