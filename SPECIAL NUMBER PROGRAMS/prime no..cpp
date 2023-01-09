#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			printf("NOT prime");
			return 0;
		}
		
	}
		printf(" YES! IT's PRIME");
	return 0;
}
