#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,x=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	int p=n;
	int k=log10(n)+1;
	while(n>0)
	{
		d=n%10;
		x=x+pow(d,k);
		n=n/10;
	}
	if(p==x)
	printf("It's a armstrong number");
	else
	printf("it is not a armstrong number ");
	return 0;
}
