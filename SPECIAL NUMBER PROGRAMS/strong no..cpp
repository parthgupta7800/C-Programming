#include<stdio.h>
int main()
{
	int n,temp=0,i=0,d=0,fact=1,s=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		
	
		for(i=1;i<=d;i++)
		{
			fact=fact*i;
		}
		s=s+fact;
		fact=1;
		
		n=n/10;
	}
	if(temp==s)
	printf("it is a strong number");
	else
	printf("Not a strong number");
	return 0;
	
}
