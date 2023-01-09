#include<stdio.h>
int main()
{
	int p,c=0,age;
	for(int i=0;i<=15;i++)
	{
		printf("enter the value of 15 persons\n");
		scanf("%d",p);
		if(age<=5)
		{
			printf("still a baby");
			c++;
		}
		else if(age>=6&&age<=17)
		{
			printf("school boy");
			c++;
		}
		else
		{
			printf("adult can have sex now");
			c++;
		}
		printf("%d",c);
	}
	
	return 0;
}










 	
