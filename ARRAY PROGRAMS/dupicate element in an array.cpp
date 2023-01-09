#include<stdio.h>
#define INT_MAX 100
int main()
{
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int a[n],max,i,b[INT_MAX]={0};
	printf("Enter the value in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	max++;
	for(i=0;i<n;i++)
	{
		b[a[i]]++;
	}
	for(i=0;i<max;i++)
	{
		if(b[i]>1)
		printf("%d=%d\n",i,b[i]);
	}
}
