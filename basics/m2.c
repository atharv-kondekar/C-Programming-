/*
	Write a program to read the three numbers & print their sum & average
*/

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("\n Enter a,b & c: ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("\n %d",a+b+c);
	printf("\n %0.2f",(a+b+c)/3.0);
}
