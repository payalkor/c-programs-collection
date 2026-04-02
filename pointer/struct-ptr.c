//structure pointer(complete)with array👈
#include<stdio.h>
#include<string.h>

int main()
    {
      struct plant
       {
         int p_id;
         char p_name[30];
      //   float ;
     };
     
     //     struct stud p;
          struct plant *p[30],s[30];
          int i,n;
      
       printf("\n enter no of plants..");
       scanf("%d",&n);
       for(i=0;i<n;i++)
          {
              p[i]=&s[i];
          printf("\n entet id..");
          scanf("%d ",&p[i]->p_id);          
          
          //scanf("%d ",(*s).rollno);          
          
          printf("\n enter name of a plant..");
      //   scanf("%s",(*s).name);
          scanf("%s",p[i]->p_name);
          }
          
        for(i=0;i<n;i++)
            {            
          printf("\n Plant id is:%d",p[i]->p_id);
          printf("\n plant name is:%s",p[i]->p_name);
            }
    
      }