#include<stdio.h>
#include<stdlib.h>
int Max;
void create();
int insert();
void dele();
int check();

void disp();

struct stk
 {
     int data;
     struct stk *next;
 };
 struct stk *Top,*temp,*newnode,*h;
  int main()
        {
                 int ch;
                 printf("\n *****Welcome in STACK*****");
                 
               printf("\n Enter Maximum Nodes:");
                 scanf("%d",&Max);
                 
                
                
                 
                 do{
                     
                
                 printf("\n  🌝1.PUSH in stack\n  2.POP from stack\n  3.Disply\n  4.Exit");
                 printf("\n Enter Uhr choice:");
                 scanf("%d",&ch);
                 switch(ch)
                   {
                       case 1:create();                                                             insert();
                                     break;
                                   
                       case 2:dele();
                                    break;
                       case 3:disp();
                                    break;
                        case 4:exit(0);
                        default : printf("\n Plz Renter above choice:");
                   }
                printf("\n ******************");
                 printf("\n");
                 }while(1);
        }
void create()
    {
        if((check())==0)
          {
             
        newnode=(struct stk*)malloc(sizeof(struct stk));
        newnode->next=NULL;
        
        
        printf("\n Enter Data :");
        scanf("%d",&newnode->data);
          }
        
    }
 int check()
     {
         int i=0;
         temp=h;
         while(temp!=NULL)
              {
                  
                  temp=temp->next;
                  i++;
              }
         if(i==Max)

              {
                  printf("\nSTACK is FULL!");
              }
                  else
                  {
                  return 0;
                  }         
         }      

                  
  int insert()   
      {         
       if (Top==NULL)
           {
               
               Top=newnode;
               h=Top;
           }
        else if((check())==0)
          {
             Top->next=newnode;
             Top=newnode;
          }        
      }
      void dele()
      {
          if(Top==NULL)
            {
                printf("\n Stack is already Empty");
            }
           else
             {
                 temp=Top;
                 printf("\n Delete element %d from stack",Top->data);
                 Top=temp->next;
                 free(temp);
             }
      }
    
      void disp()
         {
             
             if(Top==NULL)
                {
                    printf("\n Unable to Disply! Stack is already Empty");
                }
               else
               {
                 temp=h;
                
                 while(temp!=NULL)
                     {
                         printf("| %d |->",temp->data);
                         temp=temp->next;
                        
                     }
               }
            
         }
         
    
               