/*
	Write a program to accept doxen rate of banana & the quantity reuired 
	print the cost of required quantity
*/

#include<stdio.h>
int main()
{
	float d,q;
	
	printf("\n Enter Dozene Rate of Banana : ");
	scanf("%f",&d);
	
	printf("\n Enter Quantity Required : ");
	scanf("%f",&q);
	
	printf("\n The Total Cost : %0.2f",d*q);
}
