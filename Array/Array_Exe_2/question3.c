#include<stdio.h>
int main()
{
	char a[4][4];
	int i,j;
	
	printf("Enter the elements in the 4*4 matrix :\n");
	for(i=0;i<4;i++)
	{
		a[i][3-i]=42;
		for(j=0;j<3-i;j++)
		{
			a[i][j]=49;
		}
		
	}
	for(i=1;i<4;i++)
	{
		for(j=4-i;j<4;j++)
		{
			a[i][j]=48;
		}			
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%c\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	return 0;
}