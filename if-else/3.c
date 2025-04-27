// Write a program to accept two number & display the largest number 

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("\n Enter Any a&b : ");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("\n The %d is larger than %d",a,b);
	}
	
	else if(b>a)
	{
		printf("\n The %d is larger than %d",b,a);
	}
	
	else 
	{
		printf("\n Both Are Equal & Positive");
	}
	
	return 0;
	
}

