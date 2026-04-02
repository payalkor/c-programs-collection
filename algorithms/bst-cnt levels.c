//BST cnt , level
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *l,*r;
};
struct node *create(int data)
{
    struct node *newn=(struct node*)malloc(sizeof(struct node));
    newn->data=data;
    newn->l=newn->r=NULL;
    return newn;
}
struct node *insert(struct node *root,int data){
    if(root==NULL)
    //printf("\n empty");
    return create(data);
    if(data < root->data)
    root->l=insert(root->l,data);
    else if(data>root->data)
    root->r=insert(root->r,data);
    return root;
}
int disp(struct node *root,int level)
{
    if(root==NULL)
    return 0;
    else{
        disp(root->r,level+1);
        printf("\n");
        for(int i=0;i<level;i++)
            printf("    ");
            printf("%d",root->data);
            disp(root->l,level+1);
        
    }
}
int cnt(struct node *root,int level){
    if(root==NULL)
    return 0;
    else {
        if(level==0)
        return 1;
        return cnt(root->l,level-1)+cnt(root->r,level-1);
    }
}
int main(){
    int n,data,p,ch,level;
    struct node *root=NULL;
  /*  printf("\n Enter no of node:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){*/
    do{
          printf("\n 1.Insert \n 2.Show \n 3.Count \n 4.Exit");
          printf("\n Enter uhr choice ");
          scanf("%d",&ch);
          switch(ch){
              
       case 1: printf("\n Enter node :");
        scanf("%d",&data);
        root=insert(root,data);
        break;
    case 2 :printf("\n   Disply Tree");
                disp(root,0);
                break;
    case 3:printf("\n Enter level ");
                scanf("%d",&level);
            printf("\n Total nodes are %d at %d level",cnt(root,level),level);
            break;
     case 4:exit(0);
          }
    }while(1);
}
    