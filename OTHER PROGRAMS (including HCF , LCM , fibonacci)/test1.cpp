#include <stdio.h>
int main()
{
	 int i,j,k;
 	for(i=1;i<=6;i++)
	 {
		for(j=7;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i*2-1;k++)
		{
			printf(" *");
		}
		printf("\n");
	 }
}
