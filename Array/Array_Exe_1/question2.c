#include<stdio.h>
int main()
{
	int a[4][4],i,j,sum=0,high=0,low=0;
	
	printf("Enter the elements in the 4*4 matrix :\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	
	low=a[0][0];
	
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
				if(high<a[i][j])
				{
					high =a[i][j];
				}
				if(low>a[i][j])
				{
					low=a[i][j];
				}
			}
		}
		if(high<a[i][3-i])
		{
			high =a[i][3-i];
		}
		if(low>a[i][3-i])
		{
			low=a[i][3-i];
		}
	}
	
	sum = high+low;
	printf("Sum of highest and lowest is : %d\n\n",sum);
	
	return 0;
	
}