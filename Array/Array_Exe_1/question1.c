#include<stdio.h>
int main()
{
	int a[4][4],i,j,sum=0;
	
	printf("Enter the elements in the 4*4 matrix :\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
			{
				sum = sum+a[i][j];
			}
		}
	}

	for(i=0;i<4;i++)
	{
		sum = sum+a[i][3-i];
	}
	
    printf("Sum of left and right diagonal is : %d\n\n",sum);
	
	return 0;	
}