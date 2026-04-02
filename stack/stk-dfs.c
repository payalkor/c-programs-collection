#include<stdio.h>
#define MAX 100
int visited[MAX]={0},stk[MAX],top=-1,g[MAX][MAX],ver;
void stkk(int v, int ver) 
{
    int i; 
      stk[++top]=v; 
       visited[v]=1;
    
    for(i=0;i<ver;i++)
      {
          if(g[v][i] && !visited[i])
            {
              
              stkk(i,ver);
            }
      }
//stk[++top]=v; 
//visited[v]=1;
}

void dfs(int g[MAX][MAX],int ver)
{
   int i; 
   //visited[0]=1;
   for(i=0;i<ver;i++)
  {
     if(!visited[i])
     stkk(i,ver);
  }
  for(i=0;i<=top;i++)
     {
         
         printf("\n %d",stk[i]);
         // printf("\n");
     }

}

int main()
{
   int i, start, end, edge, ver; 
printf("\n Enter Vertices ");
scanf("%d",&ver); 

printf("\n Enter total no. of edges ");
scanf("%d",&edge); 
for(i=0;i<edge;i++)
{
printf("\n Enter %d edge ",i+1);
scanf("%d%d",&start, &end); 
g[start][end]=1;
}
dfs(g,ver);
}