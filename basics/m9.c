/*
	Write a c program that accept the hours & minutes as input & calculates the total minutes
	as output 
*/

#include<stdio.h>
int main()
{
	int h,m;
	
	printf("\n Enter Hours : ");
	scanf("%d",&h);
	printf("\n Enter Minutes : ");
	scanf("%d",&m);
	
	printf("\n The Total Minutes : %d",h*60+m);
}
