#include<stdio.h>
#include<stdlib.h>
#define MAX 19
struct node {
    int v; 
    struct node *next; 
}; 
typedef struct{
  struct node *head; 
}Ad; 


struct node *cre(int v) 
 {
   node *newn=(struct node*)malloc(sizeof(struct node)); 
newn->v=v;
newn->next=NULL;
return newn; 
 }
void print(Ad ad[],int v) 
  {
      int i;
      for(i=0;i<v;i++) 
    {
       printf("\n %d =>",i); 
       struct  node *tem=ad[i].head; 
         while(tem)
         {
             printf(" %d  ",tem->v);
            tem=tem->next; 
         }
    }
  }
int main()
{
  int v, e,s,en,i,g[MAX][MAX];
  printf("\n Enter vertices :");
  scanf("%d",&v); 
 if(v<=0)
  {
   printf("\n Invalid Vertices");
  return 1;
  }
Ad ad[v]; 
for(i=0;i<v;i++)
  ad[i].head=0;
printf("\n Enter TOTAL  Edges :");
  scanf("%d",&en); 
 if(en<=0)
{
   printf("\n Invalid Edges");
  return 1;
}
for(i=0;i<en;i++)
{
printf("\n Enter edge %d ",i+1);
scanf("%d%d",&s,&e); 
g[s][e]=1;
struct node *newn=cre(e);
newn->next=ad[s].head; 
ad[s].head=newn;
}
print(ad,v); 
}