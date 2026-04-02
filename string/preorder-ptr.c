#include<stdio.h>
#include<stdlib.h>
struct node {
    int data; 
    struct node *l, *r; 
   };
struct node *create(int data) 
  {
    struct node *newn=(struct node*)malloc(sizeof(struct node)); 
  newn->data=data;
  newn->l=newn->r=NULL;
   return newn; 
    }
struct node *insert(int data, struct node *root)
  {
   if(root==NULL) 
    return  create(data);
 
    if(root->data >=data)
     root->l = insert(data,root->l);
    
     if(root->data <=data)
     root->r = insert(data,root->r);
  
return root; 
  }
void pre(struct node *root) 
 {
   if(root!=NULL){
  
  // printf("\n Preorder is :");
   printf("\n %d",root->data);
    pre(root->l); 
    pre(root->r); 
   }
   

  }

int main()
{
  int i, ch, data; 
  struct node *root=NULL;
  while(1)
  {
    printf("\n 1.create \n 2.insert \n 3.preorder \n4. Exit");
printf("\n Enter uhr choice\n ");
scanf("%d",&ch); 
switch(ch)
   {
     case 1:printf("\n Created ");
                  break; 
     case 2:printf("\n Enter data:");
                 scanf("%d",&data); 
                root=    insert(data,root);
                 printf("\n Inserted ");
                 break; 
     case 3:pre(root);
                  break; 
    case 4 :return 0;
    default:printf("\n Renter correct choice ");
      }
                
    }
}