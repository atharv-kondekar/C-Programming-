// Accept any number & display the is positive or negative 

#include<stdio.h>
int main()
{
	int no;
	
	printf("\n Enter Any Number : ");
	scanf("%d",&no);
	
	if(no>0)
	{
		printf("\n The %d is positive",no);
	}
	
	else if(no<0)
	{
		printf("\n The %d is Negative",no);
	}
	
	else
	{
		printf("\n zero",no);
	}
}
