#include<stdio.h>
#include<string.h>
struct stud
   {
       int rno;
       char name[30];
       float per;
   };
   struct stud s[10];
   int i;
  void displyinf(int n);
  void maxper(int n);
  int main()
     {
          int n,ch;
           
     
         do
           {
               printf("\n1.display all information..");
               printf("\n2.display max per of stud haveing>70..");
               printf("\n3.Exit");
          
         printf("\n enter no of students:");
         scanf("%d",&n);
           
        for(i=0;i<n;i++)
           {
              
            printf("\n entet roll no of  stud..");
          scanf("%d ", &s[i].rno);                    
         printf("\n enter name of student..");               scanf("%s",s[i].name);          
          printf("\n enter per of student..");
          scanf("%f",&s[i].per);   
            }
         
        
        
         printf("\n enter ur choice..");
         scanf("%d",&ch);
         
         switch(ch)
             {
                 case 1:displyinf(n);
                              break;
                 case 2:maxper(n);
                              break;
                 case 3:return 0;
                 default:printf("\n plz reenter ur chioce..");
             }
           }while(1);
     }
     
  void displyinf(int n)   
       {   
                 
          printf("\n dislpay all information..");                printf("\nRollno\tName\tPercentage");
         for(i=0;i<n;i++)
              {
                  printf("\n%d\t%s\t%f",s[i].rno,s[i].name,s[i].per);
              }
       }
   void maxper(int n)
         {
             
        printf("\n maxi per of students is >70%");
        printf("\nRoll no\tName\tPercentage");
        for(i=0;i<n;i++)
              {
                  if(s[i].per>70)
                      {
                  printf("\n%d\t%s\t%f",s[i].rno,s[i].name,s[i].per);
                      }
              }
          }     
              
              