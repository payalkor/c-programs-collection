#include<stdio.h>
#include<stdlib.h>
//copy one to another
int a[9],i=0,cnt=1;
struct stk
{
    int data;
    struct stk *next;
};
struct stk *newnode,*p,*top=NULL,*h,*temp;
void create()
{
    newnode=(struct stk*)malloc(sizeof(struct stk));
    newnode->next=NULL;
    printf("\n Enter data:");
    scanf("%d",&newnode->data);
}
void insert()
{
    if(top==NULL)
    {
     top=newnode;
     h=top;
    
    }
     else
     {
        temp=top;
        top->next=newnode;
        top=newnode;
        top->next=NULL;
        cnt++;
     }
     printf("\n cnt %d",cnt);
}
void copy()
{
   if(top==NULL)
   printf("\n stack is empty");
  // printf("|%d|->",h->data);
  else
    {
   temp=h;
   while(temp->next->next!=NULL)
    {
      temp=temp->next;
      
           
    }
  
     p= temp->next;
        
    a[i]=p->data;
   printf("\n value %d & i %d",a[i],i);
   i++;
    temp->next=NULL;
    printf("\n %d data remove from stk",p->data);
   
    free(p);
    top=temp;
    
//    cnt--;
    printf("\n cnt %d",cnt);
    if(h==temp)
     {
         
        
         a[i]=temp->data;
      //    i++;
        // temp->next=NULL;
        printf("\n %d data remove from stk",temp->data);
   
        free(temp);
        top=NULL;
     }
    }
}
  void dis()  
   {
       
     printf("\n**Copy one stk into another stk::");
     printf("\n");
     for(i=cnt-1;i>=0;i--)
      {
         //printf("%d->",a[i]);
          if(i==0)
              {
                  printf("%d(Top)",a[i]);
                  break;
              }
              printf("%d->",a[i]);
   }
   }

void disp()
 {
    temp=h;
    while(temp->next!=NULL)
     {
         printf("%d|->",temp->data);
         temp=temp->next;
         
     }
     if(temp->next==NULL)
           {
               printf("%d(TOP)",temp->data);
           }
     
 }

int main()
{
       int ch;
       printf("\n Welcome in DLL");
       do
       {
                printf("\n 1.Insert\n 2.copy\n 3.Disply\n 4.copy dispky\n 5.exit");
                printf("\n enter uhr choice");
                scanf("%d",&ch);
                switch(ch)
                {
                   case 1:create();
                                insert();
                                break;
                  case 2:copy();
                              
                               break;
                    case 3:disp();
                                break;
                     case 4:dis();
                                break;
                    case 5:exit(0);
                }
       }while(1);
}
    
    