// Write a program to accpet the three numbers & display the smallest number 

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("\n Enter Any Number a,b&c : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("\n The %d smallest",a);
		}
		
		else
		{
			printf("\n The %d is smallest",c);
		}
	}
	
	else
	{
		if(b<a)
		{
			printf("\n %d is smallest ",b);
		}
		
		else
		{
			printf("\n The %d is smallest",c);
		}
	}
}
