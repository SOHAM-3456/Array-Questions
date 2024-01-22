#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3],i,k,j,c=0,b=0,low=0,high=0;
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
		low=a[i][0];
		
		for(j=0;j<3;j++)
		{
			if(low>a[i][j])
			{
				low=a[i][j];
			}
			high=a[0][j];
			for(k=0;k<3;k++)
			{
			    if(high<a[k][j])
			    {
				    high=a[k][j];
			    }
				if(high==low)
				{
					printf("\n\tSaddle point found\n");
					printf("\n\tIt is : %d\n\n",high);
					exit(0);
				}
			}
		}
		
	}
	
	printf("\n\tThere is no Saddle point\n\n");
	return 0;
}
