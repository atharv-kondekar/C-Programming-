/*
	Calculate the simple intrest of gievn amount  , rate of intrest ,time period 
*/

#include<stdio.h>
int main()
{
	int a;
	float r,t;
	
	printf("\n Enter The Given Amount : ");
	scanf("%d",&a);
	
	printf("\n Enter Rate of Intrest : ");
	scanf("%f",&r);
	
	printf("\n Enter Time Period : ");
	scanf("%f",&t);
	
	printf("\n The Simple Intrest : %0.2f",(float)(a*r*t)/100);
}
