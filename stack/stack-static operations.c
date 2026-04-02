//Static Simple array in Stack
#include<stdio.h>
int a[30],s[30],n,Top=-1.;
void pop()
  {
      if(Top==-1)
          {
              printf("\n Stack is already EMPTY unable to delete:");
              
          }
      else
         {
             printf("\n Delete Element %d from Stack is Succesfully DONE:\n",a[Top]);
             Top--;
         }
  }
 void push()
      {
          if(Top==n-1)
              {
                  printf("\n Stack is already FULL unable to insert:");
              }
           else
              {
                  Top++;
                  printf("\n Enter Element:");
                  scanf("%d",&a[Top]);
                   printf("\n Inserting in Stack is succesfully DONE:\n");
              }
      }
   void disp()
        {
            int i,j=0;
            if(Top==-1)
                 {
                     printf("\n Stack is EMPTY can't DISPLY:");
                 }
             else
               {
                   for(i=Top;i>=0;i--)
                      {
                          s[j++]=a[i];
                          printf("\n | %d |",a[i]);
                      }
               }
             printf("\n 2nd array:");
            for(j=0;j<n;j++)
            printf("\n |%d|",s[j]);
        }
 
            
    int main()
        {
            int ch;
            printf("\n---------Welcome in Stack------");
            printf("\n Enter size of array:");
            scanf("%d",&n);
            printf("\n********************\n");
            
            do
              {
                  printf("\n 1.PUSH(Insert)\n 2.POP(Retrive)\n 3.Disply\n 4.Exit");
                  printf("\n Enter uhr choice:");
                  scanf("%d",&ch);
                  switch(ch)
                     {
                         case 1:push();                                              
                                      break;
                         case 2: 
                                      pop();
                                      break;
                         case 3:disp();
                                       break;
                         case 4: return 0;
                        default :printf("\n No more Option in list pls Renter Above choice:");
                     }
                  printf("\n********************\n");
              }while(1);
        }
              
                         
                            
             