//ADJ LIST
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int main()
 {
    int ver,ed,start,end,j,i;
    printf("\n Enter vertices:");
    scanf("%d",&ver);
     if(ver <=0 || ver >=MAX) 
       {
         printf("\n Invalid Vertivces ");
         return 1;
         }
     int g[ver][ver];
     for(i=0;i<ver;i++)
              {
                  for(j=0;j<ver;j++)
                 {
                  g[i][j]=0;
                 }
              }
     
    printf("\n Enter Total Edges :");
    scanf("%d",&ed);
    if(ed <0 || ed > ver * (ver-1))
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
                        if(start >ed || start <0 || end <0 || end >ed)
                           {
                               printf("\n Renter Edge!");
                                i--;
                                continue;
                           }
                           else{
                         g[start][end]=1;
                        // printf("\n a %d ",g[start][end]);
                           }
                         
            
        
          //  fun(g,ver);
              }
       //  printf("\n b %d ",g[start][end]);      
        
  for(i=0;i<ver;i++)
   // printf("\n%d =",i);
    {
         printf("\n%d =",i);
         for(j=0;j<ver;j++)
           {
              //  printf("\n g[i][j] %d ",g[i][j]);
               if(g[i][j]==1)
               {
                  printf(" - %d ",j);
               }
              /* else
                printf("\nelse");*/
             
           }
    }
    }

    
}

    
