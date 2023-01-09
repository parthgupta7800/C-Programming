#include<stdio.h>
int main()
{
	int a[3][3],c1=0,c2=0,i,j;
	printf("Enter the the value in the matrix A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix you enterd is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==0)
			c1++;
			if(a[i][j]>=1)
			c2++;
		}
	}
	if(c1>c2)
	printf("it is");
	else
	printf("It is not");
	
}
