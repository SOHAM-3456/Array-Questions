#include<stdio.h>
int main()
{
	int n,m,i,j,k,sum=0;
	printf("Enter the number of rows and columbs : \n");
	scanf("%d%d",&n,&m);
	int a[n][m],b[n][m],c[n][m];
	printf("Enter the elements in 1st %d*%d matrix :\n",n,m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	
	printf("Enter the elements in 2st %d*%d matrix :\n",n,m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		for(k=0;k<m;k++)
		{
			sum=0;
			for(j=0;j<m;j++)
			{
				sum = sum + a[i][j]*b[j][k];
				c[i][k]=sum;
			}
		}
	}
	
	printf("\nMultiplication matrix is : \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}