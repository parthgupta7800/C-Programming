#include<stdio.h>
int main()
{
	int a=0,b=1,n,i;
	int s=a+b;
	printf("Enter till when\n");
	scanf("%d",&n);
	printf("%d,%d,",a,b);
	for(i=3;i<=n;i++)
	{
		printf("%d, ", s);
   		 a = b;
    	 b = s;
    	 s= a + b;
	}
}
