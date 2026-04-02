#include<stdio.h>
#define MAX 19
void bfs(int g[MAX][MAX],int v,int sta) 
{
    int k,q[v],rear=-1,front=-1,i,j,visited[MAX]={0};
q[++rear]=sta; 
visited[sta]=1;
q[++front]=sta; 
for(k=0;k<v;k++)
 {
for(i=0;i<v;i++)
  {
      if(g[sta][i]==1 && !visited[i])
         {
              q[++rear]=i;
              visited[i] =1;
         }
  }
sta=q[++front];
 }
 for(i=0;i<v;i++)
 printf("\n  %d  ",q[i]);
}

int main()
{
  int v,sta, e,s,en,i,j,g[MAX][MAX];
  printf("\n Enter vertices :");
  scanf("%d",&v); 
 if(v<=0)
{
   printf("\n Invalid Vertices");
  return 1;
}

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
}
//printf("\n Enter ADJACENCY MATRIX :\n ");
//for(i=0;i<v;i++)
//   {
//      for(j=0;j<v;j++)
//        {
//           scanf("%d",&g[i][j]);
//        }
//   }
printf("\n Enter start vertex:");
scanf("%d",&sta); 
bfs(g,v,sta);
}