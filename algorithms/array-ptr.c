#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m, n,**a,**b,**c,i,j;
	printf("Enter no. of rows and columns: ");
	scanf("%d%d", &m, &n);
	a=(int**)malloc(n*sizeof(int*));
	b=(int**)malloc(n*sizeof(int*));
	c=(int**)malloc(n*sizeof(int*));
	for(i=0;i<n;i++)
	     {
	         a[i]=(int*)malloc(m*sizeof(int));
	         b[i]=(int*)malloc(m*sizeof(int));
	         c[i]=(int*)malloc(m*sizeof(int));
	     }
	         
	
	
	printf("\n enter array %d elements in a",m*n);
	for(i=0; i<m; i++)
	{
		for( j=0; j<n; j++)
		{
		    scanf("%d",&a[i][j]);
		   
		}
	}
	printf("\n enter array %d elements in b",m*n);
	for(i=0; i<m; i++)
	{
		for( j=0; j<n; j++)
		{
		    scanf("%d",&b[i][j]);
		   
		}
	}

 printf("array of a & b as an follow\n");
 
	for(i=0; i<m; i++)
	{
		for( j=0; j<n; j++)
		{
		    printf("\t%d",a[i][j]);
		    printf("\t%d",b[i][j]);
		   
		}
		printf("\n");
	}
	printf("array of b as an follow\n");
	
	for(i=0; i<m; i++)
	{
		for( j=0; j<n; j++)
		{
		    printf("\t%d",b[i][j]);
		   
		}
		printf("\n");
	}
	printf("addition of matrix a&b\n");
	for(i=0; i<m; i++)
	{
		for( j=0; j<n; j++)
		{
		    c[i][j]=a[i][j]+b[i][j];
		    printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
	
}

	
	
	