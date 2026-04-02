//Adjacency Matrix
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void disp(int g[MAX][MAX],int ver,int ed)
 {
     int i,j;
     printf("\nAdjacency Matrix are :\n");
     for(i=0;i<ver;i++){
         for(j=0;j<ver;j++){
               printf(" %d",g[i][j]);
         }
         printf("\n");
     }
 }
int main()
 {
    int ver,ed,g[MAX][MAX]={0},start,end,i;
    printf("\n Enter vertices:");
    scanf("%d",&ver);
     if(ver <=0 || ver > MAX) 
       {
         printf("\n Invalid Vertivces ");
         return 1;
         }
    printf("\n Enter Total Edges :");
    scanf("%d",&ed);
    if(ed <=0 || ed > ver * (ver-1))
      {
        printf("\n Invalid Edges ");
        return 1;
       }
    else
        {
            for(i=0;i<ed;i++)
              {
                        printf("\n Enter %d] edges (start  End) :",i+1);
                        scanf("%d%d",&start,&end);
                        if(start >= ed || start <0 || end <0 || end >= ed)
                           {
                               printf("\n Renter Edge!");
                                i--;
                                continue;
                           }
                         g[start][end]=1;
            }
            disp(g,ver,ed);
    }

    
}

    
    