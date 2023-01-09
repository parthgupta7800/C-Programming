#include<stdio.h>
int main()
{
	int n,rev=0,temp=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp=n;													
	while(n>0)
	{
		int d=n%10;												
		rev=rev*10+d;											
		n=n/10;
	}
	printf("reverse of %d = %d",temp,rev);
	return 0;
}
