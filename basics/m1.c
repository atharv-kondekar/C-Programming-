/*
	Write a program to read the two numbers a & b & print the the a+b,a-b,a*b.a/b
*/

#include<stdio.h>
int main()
{
	int a,b;
	
	printf("\n Enter a & b : ");
	scanf("%d%d",&a,&b);
	
	printf("\n %d",a+b);
	printf("\n %d",a*b);
	printf("\n %d",a-b);
	printf("\n %f",(float)a/b);
}
