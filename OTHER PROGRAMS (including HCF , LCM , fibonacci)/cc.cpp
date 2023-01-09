#include<stdio.h>

int main()
{
	int i=0;
	do
	{
		i++;
		if(i==2)
		printf("hii");
		continue;
		printf("In the while loop");
	}
	while(i<2);
	printf("%d\n",i);
}

