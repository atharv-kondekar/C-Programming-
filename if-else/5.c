// Write a program to find the given number is odd or even 

#include<stdio.h>
int main()
{
	int no;
	
	printf("\n Enter Any Number : ");
	scanf("%d",&no);
	
	if(no%2==0)
	{
		printf("\n %d is even",no);
	}
	
	else
	{
		printf("\n %d is odd",no);
	}
}
