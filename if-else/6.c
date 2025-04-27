// Test the accepted year is leap year or not 

#include<stdio.h>
int main()
{
	int year;
	
	printf("\n Enter Any Year : ");
	scanf("%d",&year);
	
	if(year%100!=0)
	{
		if(year%4==0)
		{
			printf("\n The %d is leap Year",year );
		}
		
		else
		{
			printf("\n %d is not leap Year ",year);
		}
	}
	
	else
	{
		if(year%400==0)
		{
			printf("\n The %d is leap year",year);
		}
		
		else
		{
			printf("\n The %d is not leap year",year);
		}
	}
}
