#include<stdio.h>
int main()
{
	unsigned int x,y,A,B,C,D;
    printf("Enter the value of x,y\n");
	scanf("%d",&x);
	scanf("%d",&y);
	if(A==x&&B==y){
		printf("First Quadrant");
	}
	else if(A==x&&B==-y){
		printf("Second Quadrant");
	}
	else if(A==-x&&B==-y){
		printf("Third Quadrant");
	}
	else if(A==x&&B==-y){
		printf("Fourth Quadrant");
	}
	else{
		printf("Worng Input");
	}
}
