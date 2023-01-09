#include<stdio.h>
int main()
{
	int a,b,i,k,max;
	printf("Enter the 2 values to take out LCM\n");
	scanf("%d%d",&a,&b);
	
	max=a;
	int min=b;
	for(i=max;a>b;i++)
	{
		if(i%a==0&&i%b==0)
		{
			k=i;
			break;
		}
	}
	printf("LCM=%d",k);
	return 0;
}
