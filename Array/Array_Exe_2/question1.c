#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3],i,j,c=0,b=0;
	printf("Enter elements in 3*3 matrix : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		b=a[i][0]+a[i][1]+a[i][2];
		
		for(j=0;j<3;j++)
		{
			c=a[0][j]+a[1][j]+a[2][j];
			if(c!=b)
			{
				printf("\n\tNot a MAGIC Square \n\n");
				exit(0);
			}
		}
	}
	
	printf("\n\tIs a MAGIC Square\n\n");
	return 0;
}
