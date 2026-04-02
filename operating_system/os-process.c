#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define fixio 2
struct proce {
int bt;
int wt;
int tat;
int at;
int rem;
int pid;

};
int main(){
int tq, n,i,ttat=0,twt=0;
struct proce p[10];
printf("\n Enter pro no. ");
scanf("%d",&n); 
printf("\n Enter Time Quantum:");
scanf("%d",&tq);
for(i=0;i<n;i++){

printf("\n Enter Pid,At and bt for each process %d\n",i+1);
scanf("%d%d%d",&p[i].pid, &p[i].at, &p[i].bt); 
p[i].rem=p[i].bt;
}

srand(time(0));
int  time=0,rrs,flag=0,cmp=0;
printf("\n |");
while(cmp<n){
   flag=0;
   for(i=0;i<n;i++){
      if(p[i].at<=time && p[i].rem>0){
             flag=1;  
             rrs=i;
               
            
        
        int op=(tq<p[rrs].rem)?tq:p[rrs].rem; 
         printf(" P%d (%d-%d) | ",p[rrs].pid,time,time+op); 
         p[rrs].rem-=op; 
          time+=op+1; 
   
        if(p[rrs].rem==0) {
       
       //  printf(" \nrandtime %d",nextb);
         
        p[rrs].tat=time-p[rrs].at; 
        p[rrs].wt=p[rrs].tat-p[rrs].bt; 
         ttat+=p[rrs].tat; 
         twt+=p[rrs].wt; 
         
         if(cmp<n){
            time+=fixio; 
         int nextb=rand()%7;
         time+=nextb;
         }
         

           cmp+=1;
        }
      }
    
      
   }
}
  
printf("\n Gantt Chart");
printf("\n   Pid\tAt\tBt\tWt\tTat");
for(i=0;i<n;i++){
 printf("\n P%d\t%d\t%d\t%d\t%d",p[i].pid, p[i].at, p[i].bt, p[i].wt, p[i].tat); 
}

float avgwt=twt/n;
float avgtat=ttat/n;
printf("\n Total Avg of Wt:%f \n Total Avg of Tat :%f",avgwt, avgtat);
}