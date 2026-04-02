#include<stdio.h>
int main ()
{
    int x,y,choice;
    do
    {
    printf("\n 1. Addition......");
    printf("\n 2. Sub......");
    printf("\n 3. Multi......");
    printf("\n 4. Divi......");
    printf("\n 5. Modula Divi......");
    printf("\n 6. exit......");
    printf("\n Enter ur Choice & 2 no......");
    scanf("%d%d%d",&x,&y,&choice);
    if (choice==6)
    exit (0);
    switch (choice)
    {
      case 1: printf("\n The add Of %d & %d is %d",x,y,x+y);
       break;
       case 2 : printf("\n The Sub Of %d & %d is %d",x,y,x-y);
       break;
      case 3 : printf("\n The Multi Of %d & %d is %d",x,y,x*y);
       break;
       case 4 : printf("\n The Divi Of %d & %d is %d",x,y,x/y);
       break;
        case 5 : printf("\n The Modula  fivi Of %d & %d is %d",x,y,x%y);
        break;
        case 6 : exit (0);
    }getch();
    
    }while (choice!=6);
}
    