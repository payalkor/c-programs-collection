#include<stdio.h>
#define MAX 100
int visited[MAX]={0},stk[MAX],top=-1,g[MAX][MAX],ver;
void dfs(int i,int ver)//,int g[MAX][MAX]
 {  
    visited[i]=1;
    //printf("\n he6y ");
  //  printf("\n ver %d  ",ver);
    for(int j=0;j<ver;j++)
    {
       //printf("\n ver %d  ",ver);
       if(g[i][j] && !visited[j])
      {
        //   printf("\n j %d ",j);
           dfs(j,ver);
      }
    }
   // printf("\n top %d ",stktop);
 stk[++top]=i;
 // printf("\n top %d ",stk[top]);
 }

void topo(int g[MAX][MAX],int ver) 
{
   int i; 
 /* pfor(i=0;i<ver;i++)
    {
       visited[i]=0;
    }*/
 
  for(i=0;i<ver;i++)
    {
       if(!visited[i])
      {
           dfs(i,ver);
      }
    }
 //printf("\n top %d ",top);
 while(top>=0) 
     {
         
         printf("\n %d",stk[top--]);
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
topo(g,ver);
}