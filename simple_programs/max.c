#include<stdio.h>
#include<conio.h>
 void main ()
{
    int a , b ,c,z;
    printf("\n enter 4 no....\n");
    scanf("%d%d%d%d",&a,&b,&c,&z);  
    {
     if (a>b && a>c && a>z)
    printf(" the max no is a",a);
    {
    if( b>a && b>c && b>z)
    printf(" the max no is b",b);
    {
    if(a<c && b<c &&  c>z)
    printf("the max no is c",c);
    {
        if(a<z && b<z && c<z )
        printf(" the max no is z",z);
    }
   
    }
    
    }
    
    }
}