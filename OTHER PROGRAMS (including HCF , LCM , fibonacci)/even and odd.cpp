#include<stdio.h>
int main()
{
	int n=10,a,even=0,odd=0;
	while(n--)
	{
		scanf("%d",&a);
		if(a%2==0)
		even++;
		else		
		odd++;
	}
	printf("even=%d\nodd=%d",even,odd);
	return 0;
}
