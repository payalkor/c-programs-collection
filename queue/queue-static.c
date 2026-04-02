//Static Queue
#include<stdio.h>
#include<string.h>
void display(int front);
int q[30],n,rare=0,front=0;
int isfull()  
{
  
   if(rare==n)
     {
       
       printf("\n   Queue is full❎");
       
     }
    else
      return 0;
}
int isempty()
{
    if(front==n)
      {
          printf("\n   Queue is empty❎");
          
      }
     else
       return 0;
   
}
void  inqueue()
{
   
        if((isfull())==0)
         {
        printf("\n●●Enter Data:");
        scanf("%d",&q[rare]);
        rare++;
         }
      
}
int dequeue()
 {
           
        if((isempty())==0)
            {
        
            printf("\n Delete %d Element from Queue ☑️",q[front]);
           
            front++;
            }
       
 }
void display()
  {
      int i;
                if((isempty())==0)
                  {
                 for(i=front;i<rare;i++)
                    {
                        printf(" |%d|",q[i]);
                     
                       
                    }   
                    }     
  }
                  
 int main()
 {
    int ch,h;
    printf("\n ●●● Welcome is Queue ●●●");
    printf("\n");
    printf("\n Enter size of array of Queue: ");
    scanf("%d",&n);
    do{
           printf("\n");
           printf("\n  ⊙1.Insert in Queue\n  ⊙2.Delete from queue\n  ⊙3.Display\n  ⊙4.Exit");
           printf("\n●Enter Uhr choice: ");
           scanf("%d",&ch);
           switch(ch)
                   {
                       case 1:
                                    inqueue();
                                    break;
                       case 2:
                                   dequeue();
                                    break;
                      case 3:
                                   display();
                                    break;
                       case 4:return 0;
                   }
        printf("\n------------------------------------");
        
       }while(1);
 }
                               