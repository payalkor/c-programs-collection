#include<stdio.h>
#include<stdlib.h>
typedef struct node 
  {
      int v; 
      struct node *next;
  }node; 
typedef struct
 {
    node *head; 
 }Adj; 
node *create(int v) 
  {
     node *ne=(struct node*)malloc(sizeof(struct node)) ;
   ne->v=v;
   ne->next=NULL;
    return ne; 
  }
void print(Adj ad[],int ver)
  {
      int i;
      for (i=0;i<ver;i++)
       {
            printf("\n %d = ",i);
           node *tem=ad[i].head;
           while(tem) 
            {
                printf("  %d ->",tem->v); 
                 tem=tem->next; 
            }
       }
  }
int main()
{
   int i, start, end, edge, ver;
printf("\n Enter Vertices ");
scanf("%d",&ver); 
Adj ad[ver];
int g[ver][ver];
for(i=0;i<ver;i++)
{
    ad[i].head=0;
}

printf("\n Enter total no. of edges ");
scanf("%d",&edge); 
for(i=0;i<edge;i++)
{
printf("\n Enter %d edge ",i+1);
scanf("%d%d",&start, &end); 
g[start][end]=1;


node *ne=create(end);
ne->next=ad[start].head;
ad[start].head=ne;
}
print(ad,ver);

}