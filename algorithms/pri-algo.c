#include<stdio.h>
#define MAX 19
#include<limits.h>
 int find(int spath[MAX],int visited[MAX],int v) 
  {
      int min=INT_MAX, minind,i;
     for(i=0;i<v;i++)
      {
          if(!visited[i] && spath[i]<min) 
         {
             min=spath[i];
             minind=i;
         }
   return minind; 
      }
  }
void prim(int g[MAX][MAX],int v, int sta) 
{
   int mst[MAX],spath[MAX],visited[MAX],i,j, u; 
  for(i=0;i<v;i++)
   {
       spath[i]=INT_MAX;
       visited[i]=0;
   }
spath[sta]=0;
visited[sta]=1;
mst[0]=-1;
for(int vnt=0;vnt<v-1; vnt++)
    {
        u=find(spath,visited,v);
        visited[u]=1;
        for(i=0;i<v;i++)
         {
                  if(g[u][i] && !visited[i] && g[u][i] <spath[i])
             {
                mst[i]=u; 
                spath[i]=g[u][i];
             }
         }
    }
    printf("\n    Edge      Weight ");
   for(i=1;i<v;i++)
     {
         printf("\n  %d - %d       %d",mst[i], i,g[i][mst[i]]);
     }
}
       
int main()
{
  int v,sta,en,i,j,g[MAX][MAX];
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

printf("\n Enter ADJACENCY MATRIX :\n ");
for(i=0;i<v;i++)
  {
     for(j=0;j<v;j++)
         {
              scanf("%d",&g[i][j]);
          }
   //   printf("\n");
   }
printf("\n Enter start vertex:");
scanf("%d",&sta); 
prim(g,v,sta);
}