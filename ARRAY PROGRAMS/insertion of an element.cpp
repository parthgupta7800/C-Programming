#include<stdio.h>
int main()
{
	int n,m,pos,ele,i;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	printf("Enter the elements you want to enter\n");
	scanf("%d",&m);
	int a[n];
	printf("Enter the elements in an array\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to insert\n");
	scanf("%d",&ele);
	printf("Enter the position\n");
	scanf("%d",&pos);
	for(i=m-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	m++;
	a[pos]=ele;
	for(i=0;i<m;i++)
	printf("%d  ",a[i]);
}
