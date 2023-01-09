#include<stdio.h>
int main()
{
	int age,b=0,s=0,a=0,c=0;
	while(c<15)
	{
	printf("Enter the value[%d]:",++c);
	scanf("%d",&age);
	if(age>=0&&age<=5)

		b++;
	else if(age>=6&&age<=17)
	s++;
	else
	a++;
	
	
	}
	printf("baby=%d\n",b);
		printf("school=%d\n",s);
			printf("Go have sex now=%d\n",a);
			return 0;
		}
