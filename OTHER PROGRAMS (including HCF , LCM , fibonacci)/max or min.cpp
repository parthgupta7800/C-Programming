#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is grater",a);
	}
	else
	{
		printf("%d is greater",b);
	}
	return 0;
}
