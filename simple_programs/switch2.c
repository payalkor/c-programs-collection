#include<stdio.h>
int main ()
{
    int x,y,z,choice;
    do
    {
    printf("\n 1. Equality check if x is equal to y \n");
    printf("\n 2. Less than check if x is less than y \n");
    printf("\n 3. display Quotient & remainder\n");
    printf("\n 4. range accept a no & check if it lies between x & y\n");
    printf("\n 5. swap interchange x and y\n");
    printf("\n enter ur choice....");
    scanf("%d",&choice);
    printf("\n enter two no.....");
    scanf("%d%d",&x,&y);
    switch (choice)
    {
        case 1 : if (x==y)
        printf("\n both x and y is equal...");
        else
        printf("\n x and y is not equal....");
        break;
        case 2 : if(x<y)
        printf("\n x is less than y..");
        else
        printf("\n x is not less than y....");
        break;
        case 3 : printf("\n the quotient is %d",x/y);
        printf("\n the remainder is %d ",x%y);
        break;
        case 4 : printf("enter a no");
        scanf("%d",&z);
        if (z>=x && z<=y)
        printf("\n the no %d is lies between %d & %d",z,x,y);
        else
        printf("\n the no %d isn't lies between %d & %d",z,x,y);
        break;
        case 5 : x=x+y;
        y=x-y;
        x=x-y;
        printf("\n after interchange,,x=%d,y=%d",x,y);
    }
        
    }while(choice!=6);
}